#include <iostream>

// bit => 0,1
// 1 byte => 00110011  (8) combination of bits for 64-bit system
class A {
public:
  int a{}; // 4 bytes
  void echo() { std::cout << "This is class A" << std::endl; }
};

class B1 : public virtual A {
  /*B1 *vptr; size: 8 bytes */
public:
  int b1{}; // 4 bytes
  void echo() { std::cout << "This is class B1" << std::endl; }
};

class B2 : public virtual A {
  /*B2 *vptr; size: 8 bytes */

public:
  int b2{}; // 4 bytes
  void echo() { std::cout << "This is class B2" << std::endl; }
};

class C : public B1, B2 {
public:
  int i{};  // 4 bytes
//  char c{}; // compiler added extra padding of 3 bytes for aligning the data
  /**
   * When a class or structure contains different data members of various sizes,
   * the compiler may insert padding bytes to align the data members according
   * to the alignment requirements of the system. This ensures that accessing
   * the data is more efficient because it can be done in a single memory read
   * operation instead of multiple read operations.
   */
  void echo() { std::cout << "This is class C" << std::endl; }
};

/**
 * When we add @keyword virtual before the class to inherit
 * A new pointer variable is created by the compiler
 * that points to the parent class i.e @class A
 * in which the parent class is inherited
 * in our case this is @class B1, @class B2
 * the size of the pointer is 8 bytes in this case for 64 bit computer
 *
 * Thus, total size of the @class C is:
 *  - sizeof(int a)     = 4 bytes
 *  - sizeof(b1 *vptr)  = 8 bytes
 *  - sizeof(int b1)    = 4 bytes
 *  - sizeof(b2 *vptr)  = 8 bytes
 *  - sizeof(int b2)    = 4 bytes
 *  - sizeof(int c)     = 4 bytes
 *  ------------------> = 40 bytes
 * @return
 */
int main() {
  C c;
  std::cout << "Size of class C is: " << sizeof(c) << std::endl;
  //  std::cout << "int a is : " << c.a << std::endl;

  return EXIT_SUCCESS;
}
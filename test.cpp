#include <iostream>

class A {
public:
  int a{};
};

class B1 : public virtual A {
  // *b1.vtptr //8 bytes
public:
  int b1{}; // 4bytes promote 8bytes
};

class B2 : public virtual A {
public:
  // *b2.vtptr //8 bytes
  int b2{}; // 4 byte promote 8byte
  int d{};  // 4 bytes
  int e{}; // 4->8
  int x{};
  int y{};
};

class C : public B1, B2 {

  int c{};
};

int main() {
  C c;
  A a;
  B1 b1;
  B2 b2;
//  std::cout << "Size of A is: " << sizeof(a) << std::endl;
//  std::cout << "Size of B1 is: " << sizeof(b1) << std::endl;
  std::cout << "Size of B2 is: " << sizeof(b2) << std::endl;
//  std::cout << "Size of C is: " << sizeof(c) << std::endl;

  return EXIT_SUCCESS;
}
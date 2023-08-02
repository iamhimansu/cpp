#include <iostream>

class A {
public:
  int a{};
  void echo() { std::cout << "This is class A"; }
};

class B1 : public A {
public:
  int b1{};
  void echo() { std::cout << "This is class B1"; }
};

class B2 : public A {
public:
  int b2{};
  void echo() { std::cout << "This is class B2"; }
};

class C : public B1, B2 {
public:
  int c{};
  void echo() { std::cout << "This is class C"; }
};

/**
 *
 * Since [[@class C]] is inheriting classes [[@class B1]], [[@class B2]] and
 * [[@class B1]] and [[@class B2]] are inheriting [[@class A]] Thus, the
 variable
 * [[@var int a]] will be imported twice by the compiler Hence, total size of
 [[@class C]]
 * would be :
 *  - (sizeof a)*2 = 8 bytes +
 *  - (sizeof b1)  = 4 byte +
 *  - (sizeof b2)  = 4 byte +
 *  - (sizeof c)   = 4 byte
 *  -------------> = 20 bytes
 *
 *  Also, point to be noted that the compiler will be confused at the compile
 *  time when we try to access the value of [[@var int a]] in [[@class C]]
 *  Because the compiler doesn't know which value to used as the variable name
 *  is "ambiguous"
 *
 *  Try and uncomment @line 84 to get the error while compile time.
 *
 *  This problem is known as diamond problem or diamond death
 *  Illustration given below:
    ************************
    *********   A   *********
    ********          *******
    *******            ******
    ******              *****
    *****                ****
    ****                  ***
    ***                    **
    **                      *
    B1                     B2
    **                      *
    ***                    **
    ****                  ***
    *****                ****
    ******              *****
    *******            ******
    ********          *******
    *********   C   *********
    *************************
 * The above figure represents the diamond shape relation between the [[@class
 C]],
 * [[@class B1]], [[@class B2]] and [[@class A]]
 *
 *
 *
 * Solutions:
 *
 * To avoid this issue we use the [[@keyword virtual]] this makes the
 compiler to limit the multiple imports from the same parent class in this case
 [[@class A]]
 * @return
 */
int main() {
  C c;
  // std::cout << c.a;
}
#include <iostream>

class A {
public:
  int x{}; // initialize
  void cout() { std::cout << "Hello class A" << std::endl; }
  void cout1() { std::cout << "Hello class A#1" << std::endl; }
  void cout2() { std::cout << "Hello class A#2" << std::endl; }
};

class B {


  /*
    friend void A::cout();
    friend void A::cout1();
    friend void A::cout2();
  */
  // Instead of individually defining  we can also write
  friend class A; //whole friend class is imported here
};

void cout() { std::cout << "Hello Class B Friend of A" << std::endl; }

int main() {
  A a;
  a.cout();
  cout();
}
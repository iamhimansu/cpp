#include <iostream>

class A {
public:
  int a, b;
  void coutPublic() { std::cout << "Hello Class A" << std::endl; }

private:
  void coutPrivate() { std::cout << "Hello Class A Private" << std::endl; }

public:
  void getCoutPrivate() { return coutPrivate(); }
};

class B : public A {
public:
  void inheritCoutPublic() { return coutPublic(); }
};
int main() {
  A a;
  B b;
  a.coutPublic();
  b.inheritCoutPublic();
  b.getCoutPrivate();
}
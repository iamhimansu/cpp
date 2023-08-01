#include <iostream>

class A {
public:
  int a{}, b{};
  void coutPublic() { std::cout << "Hello Class A" << std::endl; }

private:
  void coutPrivate() { std::cout << "Hello Class A Private" << std::endl; }

public:
  void getCoutPrivate() { return coutPrivate(); }

protected:
  std::string s = "Hello I am protected!";
  std::string getCoutProtected() { return s; }
};

/**
 * using public keyword will inherit all the properties and methods with their
 * default access levels
 *  - Example using public :
 *      - public -> public
 *      - private -> private
 *      - protected -> protected
 *  - Example using private:
 *      - public -> private
 *      - private -> private
 *      - protected -> private
 *  - Example using protected:
 *      - public -> protected
 *      - private -> private
 *      - protected -> protected
 */
class B : private A {
public:
  std::string inheritCoutPublic() { return getCoutProtected(); }
};
int main() {
  A a;
  B b;
  a.coutPublic();
  std::cout << b.inheritCoutPublic() << std::endl;
}
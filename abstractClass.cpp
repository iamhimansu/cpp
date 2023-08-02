#include <iostream>

/**
 * Abstract classes are also known as pure virtual classes
 * These classes cannot be instantiated
 *
 * To use the functions inside of these classes we can create a child class
 * then use method overriding
 */
class AbstractClassCannotBeInstantiated {
  /**
   * If the function itself is being assigned to 0
   * then it is treated as "do nothing" function by the compiler
   * these functions cannot be invoked
   */
public:
  virtual void doNothingFunction() = 0;
  void methodToBeImplemented(){};
  void ideaOfTheMethod() {}
};

class InvokeAbstractClass : public AbstractClassCannotBeInstantiated {
public:
  void doNothingFunction() {
    std::cout << "Hello there, I am working, thanks to the child class"
              << std::endl;
  }
  void methodToBeImplemented() {
    std::cout
        << "Hello there, I have been implemented, thanks to the child class"
        << std::endl;
  }
};
int main() {
  InvokeAbstractClass child;
  child.doNothingFunction();
  child.methodToBeImplemented();
}
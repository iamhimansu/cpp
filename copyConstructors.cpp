#include <iostream>

/**
 * Constructor overloading
 */
class BOOK {
public:
  /**
   * The compiler always creates a default constructor if no constructor is
   * made.
   */
  BOOK() { std::cout << "This is default parameter." << std::endl; }
  /**
   * The compiler always creates a copy constructor if no copy constructor is
   * made.
   * @param b
   */
  BOOK(BOOK const &b) {
    std::cout << "This is a copy constructor." << std::endl;
  }
};
int main() {
  BOOK b1;
  BOOK b2(b1);
}
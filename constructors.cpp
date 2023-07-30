#include <iostream>
int ID = 1;

class Book {

  /**
   * Constructor makes an object an object
   *    - it is instance member function
   *    - it is invoked implicitly
   *    - it is used to solve the problem of initialization
   */
public:
  int id{};
  Book() {
    this->id = ID++;
    std::cout << "book initialized with id " << this->id << std::endl;
  }
};
int main() {
  Book b1, b2, b3;

  return EXIT_SUCCESS;
}
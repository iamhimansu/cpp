#include <iostream>

class Book{

  /**
   * Constructor makes an object an object
   *    - it is instance member function
   *    - it is invoked implicitly
   *    - it is used to solve the problem of initialization
   */
public:
  Book(){
    std::cout << "book initialized" << std::endl;
  }
};
int main(){
  Book b1, b2, b3;

  return EXIT_SUCCESS;
}
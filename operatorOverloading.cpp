#include <iostream>

/**
 * We are going to create a complex data type to add two complex numbers using
 * operator overloading
 * @return
 */

class Complex {
public:
  int real, imaginary;
  Complex operator+(Complex c) const {
    Complex temp{};
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }
};

int main() {
  Complex a = {5, 4}, b = {3, 6}, c{};
  c = a + b;
  std::cout << c.real << " " << c.imaginary << std::endl;

  return EXIT_SUCCESS;
}
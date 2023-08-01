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
  Complex operator-(Complex c) const {
    Complex temp{};
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
  }
  Complex operator*(Complex c) const {
    Complex temp{};
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
  }
  Complex operator/(Complex c) const {
    Complex temp{};
    try {
      if (c.imaginary == 0) {
        throw std::runtime_error(reinterpret_cast<const char *>(
            printf("Division by zero occurred while dividing %d by %d",
                   imaginary, c.imaginary)));
      }
      if (c.real == 0) {
        throw std::runtime_error(reinterpret_cast<const char *>(
            printf("Division by zero occurred while dividing %d by %d", real,
                   c.real)));
      }
    } catch (const std::runtime_error &e) {
      std::cout << "Exception caught: " << e.what() << std::endl;
    }
    temp.real = real / c.real;
    temp.imaginary = imaginary / c.imaginary;
    return temp;
  }
};

int main() {
  Complex a = {5, 9}, b = {0, 81}, add{}, minus{}, multiply{}, divide{};
  add = a + b;
  minus = a - b;
  multiply = a * b;
  divide = a / b;
  std::cout << "Addition: " << add.real << " " << add.imaginary << std::endl;
  std::cout << "Subtraction: " << minus.real << " " << minus.imaginary
            << std::endl;
  std::cout << "Multiplication: " << multiply.real << " " << multiply.imaginary
            << std::endl;
  std::cout << "Division: " << divide.real << " " << divide.imaginary
            << std::endl;

  return EXIT_SUCCESS;
}
#include <iostream>

class Complex {
public:
  int real, imaginary;
  Complex operator+(Complex c) const {
    Complex temp{};
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }

  friend std::ostream &operator<<(std::ostream &, Complex);
};

std::ostream &operator<<(std::ostream &os, Complex c) {
  os << c.real << " " << c.imaginary;
  return os;
}

int main() {

  Complex a = {5, 6}, b = {3, 4}, c{};

  c = a + b;
  std::cout << c;
  return EXIT_SUCCESS;
}
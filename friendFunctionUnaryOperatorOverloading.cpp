#include <iostream>

class Complex {
public:
  int real{}, imaginary{};

private: //scope does not matter in friend function
  friend Complex operator-(Complex);
};

Complex operator-(Complex c) {
  Complex t;
  t.real = -c.real;
  t.imaginary = -c.imaginary;
  return t;
}

int main() {
  Complex a = {1, -2}, b{};

  b = -a;

  std::cout << a.real << " " << a.imaginary << std::endl;
  std::cout << b.real << " " << b.imaginary << std::endl;
}
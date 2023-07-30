#include <iostream>

/**
 * Static member function are qualified with static keyword before them
 *  - they can only access static member variables
 *  - they can be accessed with/out instance of class using :: operator
 */

class Amount {
private:
  int x;            // Instance member variable
  static float roi; // Static member variable / Class member variable

public:
  static void setRoi(float r) { roi = r; }
  static float getRoi() { return roi; }
};

float Amount::roi; // Defining static member variable *important

int main() {

  std::cout << Amount::getRoi();

  Amount a;

  Amount::setRoi(4.5f);

  std::cout << a.getRoi();
}
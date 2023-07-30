#include <iostream>

/**
 * Static member variable are those who are independent of the instance of class
 *  - They can be independently called/invoked without actually creating any
 * instance of the class
 *  - They occupy memory on the first instance of the class
 *  - Lifetime: throughout the program
 *  - Default value: 0
 *  - They are also known as Class Member Variables
 *  - Only one copy in memory is created even if the class is not created
 *  - it should be defined outside of the class as well
 */
class Amount {
private:
  int x; //Instance member variable

public:
  static float roi; //Static member variable / Class member variable
};

float Amount::roi; //Defining static member variable *important

int main() {

  std::cout << Amount::roi;

  Amount a;

  Amount::roi = 4.5f;

  std::cout << a.roi;
}
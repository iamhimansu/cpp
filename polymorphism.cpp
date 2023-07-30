#include <cmath>
#include <iostream>

/* OOPS!
 * Polymorphism 3 types
 * Function Overloading
 * Operator Overloading
 * Virtual Functions
 *
 * compiler performs early bindings to these functions, i.e. functions are
 * mapped on the compile time
 *
 * Binding happens on three stages
 *  - Exact match
 *  - through data type promotion
 *  - through data type conversion
 */

// acos(0.0) gives value of π/2 multiplying it by 2 gives value of π
// Area of circle
inline double area(float R) { return (acos(0.0) * 2) * (R * R); }

// area of rectangle
inline float area(float L, float B) { return L * B; }

// area of square
int main() {
  float n1 = 0, n2 = 0;
  std::cout << "Enter radius to calculate area of circle: " and std::cin >> n1;
  std::cout << area(n1) and std::cout << std::endl;

  std::cout << "Enter Length & Breadth to calculate area of rectangle: " and
      std::cin >> n1 >> n2;
  std::cout << area(n1, n2);

  return EXIT_SUCCESS;
}
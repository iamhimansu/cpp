#include <iostream>

/**
 * TEMPLATES are a way to create a general function which can take any type of
 * argument, for example if I have a function that takes two numbers as "int"
 * and adds them then we will have to override the function for taking "float"
 * value.
 *
 * In that case we will have to copy paste the whole code once again, without
 * changing the logic
 *
 * In this scenario we use the concept of templates
 *  - Templates makes a more generic way of taking and returning the data type
 * @tparam X
 * @tparam Y
 * @param a
 * @param b
 * @return
 */
template <class X, class Y> X sum(X a, Y b) { return a + b; }

int main() { std::cout << "Sum is: " << sum(5, 6.8) << std::endl; }
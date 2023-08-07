#include <iostream>
#include <tuple>

/**
 * TUPLES
 *
 * Tuples is a container in STL which can contain more than two items of any data types
 *
 * How to create a tuple
 * - include tuple header file
 * - use tuple <a,b,c,d> to create an object.. here a,b,c,d are data types
 * - use get<index> to get the element at a specific index
 * @return
 */
int main() {
    std::tuple<int,std::string,int,std::string> t;

    t = std::make_tuple(1, "Himanshu", 2, "Raj");

    std::cout << std::get<0> (t) << std::endl;
    std::cout << std::get<1> (t) << std::endl;
    std::cout << std::get<2> (t) << std::endl;
    std::cout << std::get<3> (t) << std::endl;
}
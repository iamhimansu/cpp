/**
 * Namespaces are groups which represents a whole bunch of members
 * these members cans be variables, functions, structs or classes,
 * It is good for resolving name conflicts
 *
 * For example: the ::cout is an object which is a member inside of std namespace
 * which is again present inside of iostream file
 *
 * In this example we have added echo function inside of std file
 * thus, this means that namespaces can be extended
*/
#include <iostream>

namespace std {
    template<class X>
    void echo(const X &d) {
        std::cout << std::endl;
        std::cout << d << std::endl;
    }
}


int main() {
    std::cout << "Hello World!";
    std::echo("Hello");
}
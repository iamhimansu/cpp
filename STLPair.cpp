#include <iostream>
#include <utility>

/**
 * A pair is a container provided in STL
 * A pair is used to store two same or different type of values
 * basically it is a collection of two different type of values
 *
 * How do we create pairs
 *  - We import the <pair> header file
 *  - We use "pair" keyword to create an object of pair
 *  - We define the data type by using angular brackets <int, string>
 *  - We use the "make_pair" function to make a pair
 *  - We use .first property to access the first element of the pair
 *  - We use .second property to access the second element of the pair
 *
 * We can compare two pairs via ordinary operators only iff they are of primitive types
 *
 * An example is shown below:
 *
*/
class Computer {
public:
    std::string hello() {
        return "Hello world!";
    }
};

int main() {

    Computer c{};
    std::pair<std::string, Computer> p1;

    p1 = std::make_pair("Windows", c);

    std::cout << "first element is: " << p1.first << std::endl;
    std::cout << "second element is: " << (p1.second).hello() << std::endl;

    // Comparing pairs
    std::pair<std::string, Computer> p2;
    p2 = std::make_pair("Windows", c);

//    std::cout << "Comparing pairs: " << std::endl;

    //std::cout << (p1 == p2) << std::endl; //error because the p2 is not of primitive type

    std::pair<int, std::string> p_p1; //primitives
    std::pair<int, std::string> p_p2; //primitives

    p_p1 = std::make_pair(1, "Hello World!");
    p_p2 = std::make_pair(1, "Hello World!");

    std::cout << "Comparing pairs: ";
    std::cout << (p_p1 == p_p2) << std::endl;
}



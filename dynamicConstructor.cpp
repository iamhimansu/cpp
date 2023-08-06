#include <iostream>

/**
 * Dynamic constructors are those constructors which initializes
 * the member variables with a newly allocated memory block
 *
 * An example has been shown below
*/

class MyStackOfInt {
private:
    int size{0};
    int *stacks{nullptr};
public:
    explicit MyStackOfInt(int size) {
        this->size = size;
        this->stacks = new int[this->size]{}; //dynamically created memory is being initialized to te member variable of MyStackOfInt
        //thu this is known as dynamic constructor
    }

    int *getStack() {
        return this->stacks;
    }
};


int main() {
    MyStackOfInt msi(8);
    msi.getStack()[0] = 1;
    msi.getStack()[1] = 2;
    msi.getStack()[2] = 3;
    msi.getStack()[3] = 4;
    msi.getStack()[4] = 5;
    msi.getStack()[5] = 6;

    for (int i = 0; i < 8; ++i) {
        std::cout << msi.getStack()[i] << std::endl;
    }
}
#include <iostream>

class Helpers {

    class ArrayADT {
        [[maybe_unused]] static const int SORT_ASC = 0;
        [[maybe_unused]] static const int SORT_DESC = 1;
    private:
        int lastIndex{0};
        int *ptr{nullptr};
        int capacity{0};
        int elements{0};
        int currentIndex{0};

        void setLastIndex(int index) {
            //Check for index out of range
            this->lastIndex = index;
        }

        void setArrayPointer(int *address) {
            this->ptr = address;
        }

        void sortAscending(int *array) {

        }

        void sortDescending(int *array) {

        }

    public:

        int get(int index) {
            try {
                if (index > this->capacity) {
                    throw std::runtime_error("Index out of range.");
                }
                return this->ptr[index];

            } catch (std::runtime_error &e) {
                std::cout << e.what() << std::endl;
                exit(EXIT_FAILURE);
            }
        }

        void put(int index, int data) {
            try {
                if (index > this->capacity) {
                    throw std::runtime_error("Trying to access illegal offset.");
                }
                this->ptr[index] = data;

            } catch (std::runtime_error &e) {
                std::cout << e.what() << std::endl;
                exit(EXIT_FAILURE);
            }
        }

        void print() {
            while (!this->empty()) {
                std::cout << this->ptr[++currentIndex] << " ";
                this->pop();
            }
            std::cout << std::endl;
        }

        explicit ArrayADT(int capacity, int *arrayPtr) {
            this->capacity = capacity;
            this->setArrayPointer(arrayPtr);
            this->elements = this->capacity;
        }

        void pop() {
            this->elements--;
        }

        [[nodiscard]] bool empty() const {
            if (this->elements > 0)
                return false;
            return true;
        }

        void sort(const int sortingOrder = SORT_ASC) {
        }

        int size() {
            int count{0};
            for (; *this->ptr != 0x2F21F642; count++, this->ptr++);
            //Shift the pointer back to initial position
            this->ptr -= count;
            return count;
        }

    };

    ArrayADT Array;
public:
    static ArrayADT createNewArray(int capacity) {
        int *ptrArray = new int[capacity + 1];
        ptrArray[capacity] = 0x2F21F642;
        auto Array = new ArrayADT(capacity, ptrArray);
        return *Array;
    }
};

int main() {

    auto Array = Helpers::createNewArray(78);

    Array.put(1, 11);
    Array.put(2, 22);
    Array.put(3, 33);
    Array.put(4, 44);
    Array.put(5, 55);
    Array.put(9, 90);
    Array.size();
//
//    Array.print();

    std::cout << Array.size() << std::endl;
//    std::cout << Array.get(2) << std::endl;
}
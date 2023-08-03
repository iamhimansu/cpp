#include <iostream>
#include <cstring>
template<class X>
class MyStack {
private:
    int sizeOfStack{}, currentIndex{0};
    struct Allocation {
        X *arr_ptr{nullptr};
    };
    Allocation *Allocator{nullptr};

public:
    explicit MyStack(int size) {
        this->sizeOfStack = size;
        this->Allocator = new Allocation;
        this->Allocator->arr_ptr = new X[this->sizeOfStack];
    }

    void push(X data) {
        if (this->currentIndex < this->sizeOfStack) {
            this->Allocator->arr_ptr[this->currentIndex] = data;
            this->currentIndex++;
        }
    }

    void list() {
        for (int i = 0; i < this->sizeOfStack; ++i) {
            std::cout << "index (" << i << "): " << this->Allocator->arr_ptr[i] << std::endl;
        }
    }

    [[nodiscard]] int size() const {
        return this->sizeOfStack;
    }

    /**
     * Removes the element from top
     */
    X pop() {
        const int sizeOfAllocator = this->sizeOfStack--;
        if (sizeOfAllocator >= 1) {
            const X poppedValue = this->Allocator->arr_ptr[0];
            for (int i = 0; i < sizeOfAllocator; ++i) {
                this->Allocator->arr_ptr[i] = this->Allocator->arr_ptr[i + 1];
            }
            X *newAllocation = new X[sizeOfAllocator];
            memcpy(newAllocation, this->Allocator->arr_ptr, sizeOfAllocator);
//            memmove(newAllocation, this->Allocator->arr_ptr, sizeOfAllocator);
            return poppedValue;
        }
        return false;
    }

    X top() {
        return this->Allocator->arr_ptr[0];
    }

    X bottom() {
        return this->Allocator->arr_ptr[this->sizeOfStack];
    }

    [[nodiscard]] bool empty() {
        return this->sizeOfStack == 0;
    }

    ~MyStack() {
        delete[]this->Allocator->arr_ptr;
        delete this->Allocator;
    }
};

int main() {
    MyStack<float> stack(5);
    float f{0};
    stack.push(1.4);
    stack.push(2.6);
    stack.push(3.8);
    stack.push(4.0);
    stack.push(5.2);
    std::cout << "Stack size is: " << stack.size() << std::endl;

    while (!stack.empty()){
        std::cout << "top: " << stack.top() << std::endl;
        stack.pop();
    }
//    stack.list();
    return EXIT_SUCCESS;
}
#include <iostream>

//0,1,1,2,3,5,8,13,21..
//1,2,3,4,5,6,7,8..
long long unsigned int nthFibonacci(int n, long long unsigned int prev2 = 0, long long unsigned int prev = 1) {
    if (n<=0) {
        return prev2;
    }
    long long unsigned int _prev = prev2;
    prev2 = prev;
    prev = _prev + prev;
    n--;

    return nthFibonacci(n, prev2, prev);
}

int main() {
    std::cout << nthFibonacci(3) << std::endl;
}

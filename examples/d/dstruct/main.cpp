#include <iostream>

#include <dstruct.hpp>

int main() {
    dstruct::Array<int, 4> arr { 1, 2, 3, 4 };
    
    arr[-1] = 1;
    arr[-2] = 2;

    std::cout << "[ ";
    for (auto val : arr) {
        std::cout << val << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
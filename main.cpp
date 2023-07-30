#include <iostream>

constexpr size_t CXX_VERSION = __cplusplus;

int main() {
    std::cout << "C++ VERSION : " << CXX_VERSION << "\n";
    return 0;
}
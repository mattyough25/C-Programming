// Bring in libraries
#include <iostream>

int main(){
    int var1{123}; // Initialize
    std::cout << "var1: " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var1: " << var1 << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;

    double var2{44.55}; // Initialize
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99; // Assign
    std::cout << "var2: " << var2 << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;

    bool state{false}; // Initialize
    std::cout << std::boolalpha; // print bool as words
    std::cout << "state: " << state << std::endl;

    state = true; // Assign
    std::cout << "state: " << state << std::endl;

    return 0;
    // Program end
}
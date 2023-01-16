// Bring in libraries
#include <iostream>
#include <iomanip>

int main(){
    float number1 {1.12345678901234567890f}; 
    double number2 = {1.12345678901234567890}; 
    long double number3 = {1.12345678901234567890L}; 

    std::cout << "sizeof float: " << sizeof(number1) << std::endl;
    std::cout << "sizeof double: " << sizeof(number2) << std::endl;
    std::cout << "nsizeof long double: " << sizeof(number3) << std::endl;

    std::cout << std::setprecision(20); // controls precision
    std::cout << "number 1: " << number1 << std::endl;
    std::cout << "number 2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;

    return 0;
    // Program end
}
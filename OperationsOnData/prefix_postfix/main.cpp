// Bring in libraries
#include <iostream>

int main(){
    int value {5};

    // Increment by one
    value = value + 1;
    std::cout << "The value is: " << value << std::endl;
    
    value = 5;

    // Decrement by one
    value = value - 1;
    std::cout << "The value is: " << value << std::endl;

    // Postfix incrementing and decrementing
    value = 5;

    std::cout << "The value is (incrementing): " << value++ << std::endl;
    std::cout << "The value is: " << value << std::endl;

    value = 5;
    std::cout << "The value is (decrementing): " << value-- << std::endl;
    std::cout << "The value is: " << value << std::endl;

    // Prefix incrementing and decrementing
    value = 5;

    std::cout << "The value is: " << value << std::endl;

    std::cout << "The value is (prefix incrementing): " << ++value << std::endl;

    value = 5;
    std::cout << "The value is (prefix decrementing): " << --value << std::endl;

    return 0;
    // Program end
}
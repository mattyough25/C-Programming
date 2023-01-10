// One line comment

/* 
Block Comment
*/

// Bring in libraries
#include <iostream>
#include <string>

int addNumbers(int first_number, int second_number){
    int result = first_number + second_number;

    return result;
}

int main(){

/*
    int first_number {3};
    int second_number {7};

    // Sending data to terminal
    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    // Calling a function
    int add = addNumbers(first_number,second_number);
    std::cout << "Add Numbers: " << add << std::endl;

    //Error Messages
    std::cerr << "Error message: Something is wrong" << std::endl;

    // Log Messages
    std::clog << "Log message: Something happened" << std::endl;
*/
/*
    // Get data from program
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    //std::cin >> name;
    //std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
*/

    // Data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type your name and age: " << std::endl;

    std::getline(std::cin, full_name);
    
    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;

    return 0;
    // Program end
}
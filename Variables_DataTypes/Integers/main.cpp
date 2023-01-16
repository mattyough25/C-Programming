// Bring in libraries
#include <iostream>

int main(){
    // Braced initialization
    int elephant_count; // garbage value, can be anything
    int lion_count{}; // initialize to 0
    int dog_count{10}; // initialize to 10
    int cat_count{15}; // initialize to 15

    int domesticated_animals{dog_count + cat_count};

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domestic animal count: " << domesticated_animals << std::endl;

    // Functional Initialization. Be careful, it will narrow a float value (rounds it down)
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;

    // Assignment Initialization. Be careful, it will narrow a float value
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    // Store positive and negative
    int value1 {10};
    int value2 {-300};

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "sizeof value1: " << sizeof(value1) << std::endl;
    std::cout << "sizeof value2: " << sizeof(value2) << std::endl;

    // Signed ints
    signed int value3 {10};
    signed int value4 {-300};

    std::cout << "value3: " << value3 << std::endl;
    std::cout << "value4: " << value4 << std::endl;
    std::cout << "sizeof signed value3: " << sizeof(value3) << std::endl;
    std::cout << "sizeof signed value4: " << sizeof(value4) << std::endl;

    // Unsigned ints
    unsigned int value5 {10};
    unsigned int value6 {300}; // cant do (-) numbers

    std::cout << "value5: " << value5 << std::endl;
    std::cout << "value6: " << value6 << std::endl;
    std::cout << "sizeof unsigned value5: " << sizeof(value5) << std::endl;
    std::cout << "sizeof unsigned value6: " << sizeof(value6) << std::endl;

    // Short and Long modifiers. Can be used with signed and unsigned too
    short short_var {-32768}; // 2 bytes
    short int short_int {455};

    int int_var {55}; // 4 bytes

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33}; //

    long long long_long {888}; // 8 bytes
    long long int long_long_int {999};

    std::cout << "Short variable: " << short_var <<
         ", size: " << sizeof(short_var) << " bytes" << std::endl;

    std::cout << "Short int: " << short_int <<
         ", size: " << sizeof(short_int) << " bytes" << std::endl;

    std::cout << "Int variable: " << int_var <<
         ", size: " << sizeof(int_var) << " bytes" << std::endl;

    std::cout << "Long variable: " << long_var <<
         ", size: " << sizeof(long_var) << " bytes" << std::endl;

    std::cout << "Long int: " << long_int <<
         ", size: " << sizeof(long_int) << " bytes" << std::endl;

    std::cout << "Long long variable: " << long_long <<
         ", size: " << sizeof(long_long) << " bytes" << std::endl;

    std::cout << "Long long variable: " << long_long_int <<
         ", size: " << sizeof(long_long_int) << " bytes" << std::endl;

    return 0;
    // Program end
}
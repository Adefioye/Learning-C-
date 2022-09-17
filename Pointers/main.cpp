#include <iostream>

int main() {
    
    /*
    // Declare a pointer 
    int *p_number {};
    double *p_fractional_number {};

    // Declare a pointer and initialize with nullptr
    int *p_number {nullptr};
    int *p_fractional_number {nullptr};
    */

   /*
    // Declare a pointer and initialize with a value 
    int int_val {47};
    int *p_int {&int_val};

    std::cout << "Integer value: " << int_val << std::endl;
    std::cout << "Integer value (Address in memory): " << p_int << std::endl;

    int int_var {63};
    p_int = &int_var;

    std::cout << "Integer value: " << int_var << std::endl;
    std::cout << "Integer value (Address in memory): " << p_int << std::endl;
    */

//    // De-referencing a pointer 
//    int *p_int {nullptr};
//    int num {56};
//    p_int = &num;

//    std::cout << "Value: " << *p_int << std::endl;

    // const char *message {"Hello world"};

    // std::cout << "Message: " << message << std::endl;
    // std::cout << "*message content: " << *message << std::endl;

    // To modify a string (array of characters)
    char message1[] {"Hello world"};
    message1[1] = 'B';

    std::cout << "Message: " << message1 << std::endl;

    return 0;
}
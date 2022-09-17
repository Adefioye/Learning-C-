#include <iostream>

int main() {
    
    // Dynamic heap memory

    /*
    int *p_number{nullptr};
    p_number = new int;

    *p_number = 77;

    std::cout << "p_number (Address location): " << p_number << std::endl;
    std::cout << "*p_number (Actual content): " << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;
    */

   int *p_number1 {new int};
   int *p_number2 {new int (22)};
   int *p_number3 {new int {23}};

    std::cout << "p_number1 (Address location): " << p_number1 << std::endl;
    std::cout << "*p_number1 (Actual content): " << *p_number1 << std::endl;

    std::cout << "p_number2 (Address location): " << p_number2 << std::endl;
    std::cout << "*p_number2 (Actual content): " << *p_number2 << std::endl;

    std::cout << "p_number3 (Address location): " << p_number3 << std::endl;
    std::cout << "*p_number3 (Actual content): " << *p_number3 << std::endl;

    // Release pointers from memory
    delete p_number1;
    p_number1 = nullptr;

    delete p_number2;
    p_number2 = nullptr;

    delete p_number3;
    p_number3 = nullptr;

    // Reuse pointers
    p_number1 = new int(81);

    std::cout << "p_number1 (Address location): " << p_number1 << std::endl;
    std::cout << "*p_number1 (Actual content): " << *p_number1 << std::endl;

    return 0;
}
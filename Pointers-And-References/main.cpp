#include <iostream>

int main() {
    
    double double_value {12.34};
    double &ref_double_value {double_value};
    double *p_double_value {&double_value};

    // Reading
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value (Address): " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << "=========================================" << std::endl;
    std::cout << "Writing through a pointer" << std::endl;
    std::cout << "=========================================" << std::endl;
    *p_double_value = 100.25;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value (Address): " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    return 0;
}
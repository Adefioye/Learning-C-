#include <iostream>

int main() {
    
    int int_data {33};
    double double_data {55.5};

    int &ref_int_data {int_data};
    double &ref_double_data {double_data};

    std::cout << "Actual int and double data with addresses" << std::endl;

    std::cout << "Int data: " << int_data << std::endl;
    std::cout << "Int data (Address): " << &int_data << std::endl;
    std::cout << "Double data: " << double_data<< std::endl;
    std::cout << "Double data (Address): " << &double_data<< std::endl;

    std::cout << "References of int and double data with addresses" << std::endl;

    std::cout << "Ref of Int data: " << ref_int_data << std::endl;
    std::cout << "Ref of Int data (Address): " << &ref_int_data << std::endl;
    std::cout << "Ref of Double data: " << ref_double_data<< std::endl;
    std::cout << "Ref of Double data (Address): " << &ref_double_data<< std::endl;


    return 0;
}
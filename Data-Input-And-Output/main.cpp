#include <iostream>
#include <string>

int main() {
    
    // print out data to console
    std::cout << "Koko lamba" << std::endl;

    std::cerr << "Error: Something is wrong!" << std::endl;
    std::clog << "Logs: Logs something on the console" << std::endl;

    // Taking input data 
    std::string name;
    int age;

    std::cin >> name;
    std::cin >> age;

    std::cout << "My name is " << name  << " and " << age << " year's old" << std::endl;

    // Taking multiple string input
    std::string full_name;
    int age1;

    std::cout << "Please type in your fullname and age: " << std::endl;

    std::getline(std::cin,full_name);
    std::cin >> age1;

    std::cout << "My name is: " << full_name << " and "<< age1 << " year's old" << std::endl;
}
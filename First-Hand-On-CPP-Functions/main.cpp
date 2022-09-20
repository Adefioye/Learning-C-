#include <iostream>
#include <string>

void max_str(const std::string &input1, const std::string input2, std::string &output) {
    std::cout << "input1: " << input1 << std::endl;
    std::cout << "input2: " << input2 << std::endl;
    if (input1 > input2) {
        output = input1;
    }else {
        output = input2;
    }
}

int main() {
    
    std::string out_str;
    std::string string1 ="Alabama";
    std::string string2 = "Bellevue";

    max_str(string1, string2, out_str);
    std::cout << "max_str: " << out_str << std::endl;
    
    return 0;
}
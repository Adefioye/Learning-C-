#include <iostream>

int main() {
    /*
    int scores[10];

    for(size_t i{0}; i < 10; i++) {
        std::cout << "score [" << i << "] = " << scores[i] << std::endl;
    }
    return 0;
    */

   /*
   double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

   for (size_t i{0}; i < 5; i++) {
    std::cout << "salaries [" << i << "] = " << salaries[i] << std::endl;
   }
   */

  // Omit size of array
  int class_sizes[] {10, 20, 30, 48, 67, 98};

  for (auto value : class_sizes) {
    std::cout << "value: " << value << std::endl;
  }
}
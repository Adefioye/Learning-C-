#include <iostream>

int main() {
    
    size_t size {5};

    double *p_salaries { new double[size]};

    int *p_students { new(std::nothrow) int[size]{} };

    double *p_scores { new(std::nothrow) double[size]{1, 2, 3, 4, 5}};

    if (p_scores) {
        std::cout << "Size of scores (It's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores" << std::endl;
    }

    // Print out elements using regular access notation
    for (size_t i{}; i < size; i++) {
        std::cout << "Value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    return 0;
}
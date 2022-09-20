#include <iostream>
#include "cylinder.h"

int main() {
    
    Cylinder cylinder1;

    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    cylinder1.set_height(2.4);
    cylinder1.set_base_radius(2.0);

    std::cout << "New height: " << cylinder1.get_height() << std::endl;
    std::cout << "New base radius: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

}
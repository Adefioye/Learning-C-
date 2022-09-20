#ifndef CYLINDER_H
#define CYLINDER_H

#include "constant.h"

class Cylinder {
    private:
        double base_radius {1};
        double height {1};

    public:
        // Constructors
        Cylinder() = default; 
        Cylinder(double radius, double height);
        
        double volume();

        double get_base_radius();

        double get_height();

        void set_base_radius(double radius);

        void set_height(double height);
};

#endif
#include "cylinder.h"
#include "constant.h"

Cylinder::Cylinder(double radius, double height){
    base_radius = radius;
    height = height;
}

double Cylinder::volume() {
    return PI * base_radius * base_radius * height;
}

double Cylinder::get_base_radius(){
    return base_radius;
}

double Cylinder::get_height() {
    return height;
}

void Cylinder::set_base_radius(double rad_param) {
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param) {
    height = height_param;
}
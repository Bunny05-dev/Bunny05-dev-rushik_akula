#include <stdio.h>




#define PI 3.14159  








void calculateCone(double radius, double height, double slant_height);
void calculateSphere(double radius);
void calculateCuboid(double length, double width, double height);




int main() {
    //cone
    double cone_radius = 5.0;
    double cone_height = 10.0;
    double cone_slant_height = 12.0;




    //sphere
    double sphere_radius = 7.0;




    //Cuboid
    double cuboid_length = 4.0;
    double cuboid_width = 6.0;
    double cuboid_height = 8.0;




   
    calculateCone(cone_radius, cone_height, cone_slant_height);
    calculateSphere(sphere_radius);
    calculateCuboid(cuboid_length, cuboid_width, cuboid_height);




    return 0;
}








void calculateCone(double radius, double height, double slant_height) {
    double surface_area = PI * radius * (radius + slant_height);
    double volume = (1.0 / 3.0) * PI * radius * radius * height;




    printf("Cone:\n");
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
}








void calculateSphere(double radius) {
    double surface_area = 4.0 * PI * radius * radius;
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;




    printf("Sphere:\n");
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
}








void calculateCuboid(double length, double width, double height) {
    double surface_area = 2.0 * (length * width + length * height + width * height);
    double volume = length * width * height;




    printf("Cuboid:\n");
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
}

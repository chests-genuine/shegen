#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the surface area of a cylinder
double calculateCylinderSurfaceArea(double radius, double height) {
    double lateralSurfaceArea = 2.0 * PI * radius * height;
    double baseSurfaceArea = 2.0 * PI * radius * radius;

    return lateralSurfaceArea + baseSurfaceArea;
}

int main() {
    double radius, height;

    // Get the radius and height from the user
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate and display the surface area of the cylinder
    double surfaceArea = calculateCylinderSurfaceArea(radius, height);

    std::cout << "Surface area of the cylinder: " << surfaceArea << std::endl;

    return 0;
}

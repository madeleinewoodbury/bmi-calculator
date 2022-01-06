#include <iostream>
#include <cmath>

double get_height()
{
    double height;
    std::cout << "Enter height in feet: ";
    std::cin >> height;

    // return height in meters
    return height * 0.3048;
}

int main()
{
    std::cout << "BMI Calculator\n";
    double height = get_height();
    height = round(height * 100) / 100; // round to 2 decimal places
    std::cout << "Your height is " << height << " meters\n";
}
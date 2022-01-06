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

double get_weight()
{
    double weight;
    std::cout << "Enter weight in pounds: ";
    std::cin >> weight;

    // return weight in kg
    return weight / 2.2;
}

double get_bmi()
{
    double h = get_height();
    double w = get_weight();

    double bmi = (w / (h * h));
    return round(bmi * 100) / 100; // round to 2 decimal places
}

int main()
{
    std::cout << "BMI Calculator\n";
    double bmi = get_bmi();
    std::cout << "Your bmi is " << bmi << std::endl;
}
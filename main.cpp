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

void display_bmi_info(double bmi)
{
    std::cout << "Your bmi is " << bmi << std::endl;

    if (bmi < 18.5)
    {
        std::cout << "You are underweight\n";
    }
    else if (bmi > 24.9)
    {
        std::cout << "You are overweight\n";
    }
    else
    {
        std::cout << "You are healthy\n";
    }
}

int main()
{
    std::cout << "BMI Calculator\n";
    double bmi = get_bmi();
    display_bmi_info(bmi);
}
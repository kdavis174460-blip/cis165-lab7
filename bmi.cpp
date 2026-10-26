/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iomanip>
#include <iostream>

int main() {
    double weight;
    double height;
  

    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;

    std::cout << "Enter your height in inches: ";
    std::cin >> height;

    if (weight <= 0.0 || height <= 0.0) {
        std::cout << "Error: weight and height must be positive.\n";
        return 1;
    }

     double bmi = weight * 703.0 / (height * height);
    
   std:: string category;
    if (bmi < 18.5) {
        category = "Underweight";
    } 
    else if (bmi <= 25.0) {
        category = "Optimal weight";
    } 
    else {
        category = "Overweight";
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "BMI: " << bmi << '\n';
    std::cout << "Category: " << category << '\n';

    return 0;
}
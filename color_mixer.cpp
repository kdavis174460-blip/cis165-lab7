/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cstring>
#include <iomanip>
#include <iostream>

int main() {
    const int COLOR_SIZE = 20;
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    std::cout << "Enter the first primary color (red, blue, or yellow): ";
    std::cin >> std::setw(COLOR_SIZE) >> first_color;

    std::cout << "Enter the second primary color (red, blue, or yellow): ";
    std::cin >> std::setw(COLOR_SIZE) >> second_color;
     
     bool first =
        std::strcmp(first_color, "red") == 0 ||
        std::strcmp(first_color, "blue") == 0 ||
        std::strcmp(first_color, "yellow") == 0;
        
     bool second =
        std::strcmp(second_color, "red") == 0 ||
        std::strcmp(second_color, "blue") == 0 ||
        std::strcmp(second_color, "yellow") == 0;

    if (!first || !second) {
        std::cout << "Error: both inputs must be red, blue, or yellow.\n";
    } 
    else if (std::strcmp(first_color, second_color) == 0) {
        std::cout << "Result: " << first_color << '\n';
    } 
    else if (
        (std::strcmp(first_color, "red") == 0 &&
         std::strcmp(second_color, "blue") == 0) ||
        (std::strcmp(first_color, "blue") == 0 &&
         std::strcmp(second_color, "red") == 0)) {
        std::cout << "Result: purple\n";
    } 
    else if (
        (std::strcmp(first_color, "red") == 0 &&
         std::strcmp(second_color, "yellow") == 0) ||
        (std::strcmp(first_color, "yellow") == 0 &&
         std::strcmp(second_color, "red") == 0)) {
        std::cout << "Result: orange\n";
    } 
    else {
        std::cout << "Result: green\n";
    }

    return 0;
}
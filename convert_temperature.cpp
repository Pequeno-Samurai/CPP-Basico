//Temperature Converter: Write a program that can convert temperatures between Fahrenheit, Celsius, and Kelvin.

/*Formulas:
---------Fahrenheit----------
Formula F to C = (32 °F − 32) × 5/9 = 0 °C
Formula F to K(32 °F − 32) × 5/9 + 273,15 = 273,15 K
---------Celsius-------------
Formula C to F = (0 °C × 9/5) + 32 = 32 °F
Formula C to K = 0 °C + 273,15 = 273,15 K
---------Kelvin--------------
Formula K to C = 0 K − 273,15 = -273,1 °C
Formula k to F = (0 K − 273,15) × 9/5 + 32 = -459,7 °F
*/
#include <iostream>

int main() {

    std::cout << "1.Convert Fahrenheit to Celsius" << std::endl;
    std::cout << "2.Convert Celsius to Fahrenheit" << std::endl;
    std::cout << "3.Convert Kelvin to Celsius" << std::endl;
    std::cout << "4.Convert Celsius to Kelvin" << std::endl;
    std::cout << "5.Convert Fahrenheit to Kelvin" << std::endl;
    std::cout << "6.Convert Kelvin to Fahrenheit" << std::endl;
    std::cout << "7.Exit" << std::endl;

    return 0;
}

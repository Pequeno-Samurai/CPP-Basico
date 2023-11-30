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

/*
Step 1: create a function to convert Fahrenheit to Celsius - Done
Step 2: create a function to convert Fahrenheit to Kelvin - In progress

Step 3: create a function to convert Celsius to Fahrenheit - In progress
Step 4: create a function to convert Celsius to Kelvin - In progress

Step 5: create a function to convert Kelvin to Celsius - In progress
Step 6: create a function to convert Kelvin to Fahrenheit - In progress
*/

/*Options menu:
    std::cout << "1.Convert Fahrenheit to Celsius" << std::endl;
    std::cout << "2.Convert Celsius to Fahrenheit" << std::endl;
    std::cout << "3.Convert Kelvin to Celsius" << std::endl;
    std::cout << "4.Convert Celsius to Kelvin" << std::endl;
    std::cout << "5.Convert Fahrenheit to Kelvin" << std::endl;
    std::cout << "6.Convert Kelvin to Fahrenheit" << std::endl;
    std::cout << "7.Exit" << std::endl;
*/

float FahrenheitToCelsius(float fahrenheit){ //is working
    return (fahrenheit - 32) * 5/9;
}

#include <iostream>

int main() {

    /*FahrenheitToCelsius() tests
    std::cout << FahrenheitToCelsius(0) << std::endl;
    std::cout << FahrenheitToCelsius(32) << std::endl;
    std::cout << FahrenheitToCelsius(100) << std::endl;
    std::cout << FahrenheitToCelsius(212) << std::endl;
    */




    return 0;
}

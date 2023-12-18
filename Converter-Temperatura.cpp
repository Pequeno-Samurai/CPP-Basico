//Temperature Converter: A program that can convert temperatures between Fahrenheit, Celsius, and Kelvin.

float FahrenheitToCelsius(float fahrenheit){ //Converts Fahrenheit to Celsius \ Formula F to C = (32 °F − 32) × 5/9 = 0 °C
    return (fahrenheit - 32) * 5/9;
}

float FahrenheitToKelvin(float fahrenheit){ //Converts Fahrenheit to Kelvin \ Formula F to K(32 °F − 32) × 5/9 + 273,15 = 273,15 K
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float CelsiusToFahrenheit(float celsius){ //Converts Celsius to Fahrenheit \ Formula C to F = (0 °C × 9/5) + 32 = 32 °F
    return (celsius * 9/5) + 32;
}

float CelsiusToKelvin(float celsius){ //Converts Celsius to Kelvin \ Formula C to K = 0 °C + 273,15 = 273,15 K
    return celsius + 273.15;
}

float KelvinToCelsius(float kelvin){ //Converts Kelvin to Celsius \ Formula K to C = 0 K − 273,15 = -273,1 °C
    return kelvin - 273.15;
}

float KelvinToFahrenheit(float kelvin){ //Converts Kelvin to Fahrenheit \ Formula K to F = (0 K − 273,15) × 9/5 + 32 = -459,7 °F
    return (kelvin - 273.15) * 9/5 + 32;
}

#include <iostream>

int main() {

    float temperature;
    int option;

    do {
    //Options menu.
    std::cout << "1.Convert Fahrenheit to Celsius" << std::endl;
    std::cout << "2.Convert Celsius to Fahrenheit" << std::endl;
    std::cout << "3.Convert Kelvin to Celsius" << std::endl;
    std::cout << "4.Convert Celsius to Kelvin" << std::endl;
    std::cout << "5.Convert Fahrenheit to Kelvin" << std::endl;
    std::cout << "6.Convert Kelvin to Fahrenheit" << std::endl;
    std::cout << "7.Exit" << std::endl;
    std::cout << ">>>>: ";
    std::cin >> option;

    switch (option) {
        case 1:
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Celsius: " << FahrenheitToCelsius(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Fahrenheit: " << CelsiusToFahrenheit(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Celsius: " << KelvinToCelsius(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 4:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Kelvin: " << CelsiusToKelvin(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 5:
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Kelvin: " << FahrenheitToKelvin(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 6:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "\nTemperature in Fahrenheit: " << KelvinToFahrenheit(temperature) << std::endl;
            std::cout << std::endl;
            break;
        case 7:
            std::cout << "\nEnding the program"; //End the program.
            break;
        default:
            std::cout << "\nInvalid option !" << std::endl;
            std::cout << std::endl;
            break;
    }
} while (option!= 7);

    return 0;
}

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
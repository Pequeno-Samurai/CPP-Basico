//Temperature Converter: A program that can convert temperatures between Fahrenheit, Celsius, and Kelvin.

float FahrenheitToCelsius(float fahrenheit){ //Converts Fahrenheit to Celsius
    return (fahrenheit - 32) * 5/9;
}

float FahrenheitToKelvin(float fahrenheit){ //Converts Fahrenheit to Kelvin
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float CelsiusToFahrenheit(float celsius){ //Converts Celsius to Fahrenheit
    return (celsius * 9/5) + 32;
}

float CelsiusToKelvin(float celsius){ //Converts Celsius to Kelvin
    return celsius + 273.15;
}

float KelvinToCelsius(float kelvin){ //Converts Kelvin to Celsius
    return kelvin - 273.15;
}

float KelvinToFahrenheit(float kelvin){ //Converts Kelvin to Fahrenheit
    return (kelvin - 273.15) * 9/5 + 32;
}

#include <iostream>

int main() {

    float temperature;
    int option;

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
            std::cout << "Temperature in Celsius: " << FahrenheitToCelsius(temperature) << std::endl;
            break;
        case 2:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "Temperature in Fahrenheit: " << CelsiusToFahrenheit(temperature) << std::endl;
            break;
        case 3:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "Temperature in Celsius: " << KelvinToCelsius(temperature) << std::endl;
            break;
        case 4:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "Temperature in Kelvin: " << CelsiusToKelvin(temperature) << std::endl;
            break;
        case 5:
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            std::cout << "Temperature in Kelvin: " << FahrenheitToKelvin(temperature) << std::endl;
            break;
        case 6:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "Temperature in Fahrenheit: " << KelvinToFahrenheit(temperature) << std::endl;
            break;
        case 7:
            std::cout << "Ending the program"; //End the program.
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    }

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
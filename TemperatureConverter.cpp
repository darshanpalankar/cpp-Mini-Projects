#include <iostream>
using namespace std;

class TemperatureConverter
{
private:
    double temp;

public:
    // Constructor
    TemperatureConverter(double t)
    {
        temp = t;
    }

    double celsiusToFahrenheit()
    {
        return (temp * 9 / 5) + 32;
    }

    double fahrenheitToCelsius()
    {
        return (temp - 32) * 5 / 9;
    }

    double celsiusToKelvin()
    {
        return temp + 273.15;
    }

    double kelvinToCelsius()
    {
        return temp - 273.15;
    }
};

int main()
{
    int choice;
    float value;

    cout << "==============================" << endl;
    cout << "  Temperature Converter  " << endl;
    cout << "==============================" << endl;

    cout << "\n1. Celsius to Fahrenheit";
    cout << "\n2. Fahrenheit to Celsius";
    cout << "\n3. Celsius to Kelvin";
    cout << "\n4. Kelvin to Celsius";
    cout << "\n5. Exit";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter temperature value: ";
        cin >> value;

        TemperatureConverter obj(value);

        switch (choice)
        {
        case 1:
            cout << "Result: " << obj.celsiusToFahrenheit() << " Fahrenheit";
            break;

        case 2:
            cout << "Result: " << obj.fahrenheitToCelsius() << " Celsius";
            break;

        case 3:
            cout << "Result: " << obj.celsiusToKelvin() << " Kelvin";
            break;

        case 4:
            cout << "Result: " << obj.kelvinToCelsius() << " Celsius";
            break;
        }
    }
    else if (choice == 5)
    {
        cout << "Exiting program...";
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}
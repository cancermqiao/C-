//5.cpp -- convert Celsius to Fahrenheit

#include <iostream>
double celsiusToFahrenheit(int);

int main()
{
    using namespace std;

    int celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " degrees Celsius is "
         << fahrenheit << " degress Fahrenheit." 
         << endl;
    
    return 0;
}

double celsiusToFahrenheit(int celsius)
{
    return 1.8 * celsius + 32;
}

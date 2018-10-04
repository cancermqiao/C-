// 2.cc -- calculate BMI(Body Mass Index)
#include <iostream>
int main()
{
    using namespace std;
    const int kInchesPerFeet = 12;
    const float kMetersPerInch = 0.0254;
    const float kPoundsPerKilogram = 2.2;
    int feet, inches;
    int pounds;

    cout << "Please enter your height in feet and inches:\n";
    cout << "Fist, enter the feet: ";
    cin >> feet;
    cout << "Next, enter the inches: ";
    cin >> inches;
    float meters = (feet * kInchesPerFeet + inches) * kMetersPerInch;
    cout << "Please enter your weight in pounds: ";
    cin >> pounds;
    float kilograms = pounds / kPoundsPerKilogram;
    float BMI = kilograms / (meters * meters);
    cout << "Your BMI is " << BMI << endl;

    return 0;
}

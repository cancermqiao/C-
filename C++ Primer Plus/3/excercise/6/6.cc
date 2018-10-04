// 6.cc -- oil consumption
#include <iostream>
int main()
{
    using namespace std;
    long miles, gallon;

    cout << "Enter the distance in miles: ";
    cin >> miles;
    cout << "Enter the oil in gallon: ";
    cin >> gallon;
    float gallon_per_mile = double(gallon) / miles;
    cout << "Your oil consumption is " << gallon_per_mile
         << " gallon per mile.\n";

    return 0;
}

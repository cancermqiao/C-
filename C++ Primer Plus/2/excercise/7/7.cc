//7.cpp -- display hour and minute

#include <iostream>
using namespace std;
void Display(int, int);

int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    Display(hours, minutes);

    return 0;
}

void Display(int hours, int minutes)
{
    cout << hours << ":" << minutes << endl;
}

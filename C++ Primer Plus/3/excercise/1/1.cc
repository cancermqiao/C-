// 1.cc -- convert inch to feet and inch
#include <iostream>
int main()
{
    using namespace std;
    int height;
    const int kInchPerFeet = 12;
    
    cout << "Please enter your height in inch: ___\b\b\b";
    cin >> height;
    int feet = height / kInchPerFeet;
    int inches = height % kInchPerFeet;
    cout << height << " inches is "
         << feet << " feet, "
         << inches << " inches.\n";

    return 0 ;
}

//2.cpp -- convert long to yard(A long is equial to 220 yards)

#include <iostream>

int main()
{
    using namespace std;
    
    cout << "Please enter the length in long: ";
    int length;
    cin >> length;
    int yards = 220 * length;
    cout << length << " long = "
         << yards << " yards." << endl;

    return 0;
}   

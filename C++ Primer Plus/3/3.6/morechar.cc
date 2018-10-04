// morechar.cc -- the char type and int type contrast
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(): ";
    cout.put(ch);

    // using the cout.put() to display a char constant
    cout.put('!');
    cout << endl << "Done" << endl;

    return 0;
}

//convert.cpp -- converts stone to pounds

#include <iostream>
int stoneToPounds(int);

int main()
{
    using namespace std;

    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stoneToPounds(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}


int stoneToPounds(int stone)
{
    return 14 * stone;
}

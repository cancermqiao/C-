// floatnum.cc -- floating-point types
#include <iostream>
int main()
{
    using namespace std;
    cout << ios_base::fixed << endl << ios_base::floatfield << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << ", a million mints = ";
    cout << million * mint << endl;

    return 0;
}

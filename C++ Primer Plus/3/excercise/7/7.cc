// 7.cc -- convert litre/km to mpg
#include <iostream>
int main()
{
    using namespace std;
    const float kMilesPer100kms = 62.14;
    const float kLitrePerGallon = 3.875;
    float litre_per_100km;
    
    cout << "Please enter the oil consumption in litre/100km: ";
    cin >> litre_per_100km;
    int mpg = kMilesPer100kms / (litre_per_100km / kLitrePerGallon);
    cout << litre_per_100km << "/100km is "
         << mpg << "mpg.\n";

    return 0;
}

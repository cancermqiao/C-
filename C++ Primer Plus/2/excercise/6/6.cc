//6.cpp -- convert light year to astronomical units.

#include <iostream>
double LyToAu(double);

int main()
{
    using namespace std;
    
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    double astro_units = LyToAu(light_years);
    cout << light_years << " light years = "
         << astro_units << " astronomical units."
         << endl;
    
    return 0;
}

double LyToAu(double light_years)
{
    return 63240 * light_years;
}

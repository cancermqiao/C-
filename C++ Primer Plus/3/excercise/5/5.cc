// 5.cc -- population rate
#include <iostream>
int main()
{
    using namespace std;
    long long world_population, china_population;
    
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of China: ";
    cin >> china_population;
    float rate = double(china_population) / world_population * 100;
    cout << "The population of China is " << rate
         << "% of the world population.\n";

    return 0;
}

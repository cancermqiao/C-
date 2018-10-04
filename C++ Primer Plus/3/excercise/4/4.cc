// 4.cc -- display in days, hours, minutes, seconds
#include <iostream>
int main()
{
    using namespace std;
    const int kSecondsPerMinute = 60;
    const int kMinutesPerHour = 60;
    const int kHoursPerDay = 24;
    long long time;
    
    cout << "Enter the number of seconds: ";
    cin >> time;
    int seconds = time % kSecondsPerMinute;
    long long rest = time / kSecondsPerMinute;
    int minutes = rest % kMinutesPerHour;
    rest = rest / kMinutesPerHour;
    int hours = rest % kHoursPerDay;
    int days = rest / kHoursPerDay;
    cout << time << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds\n";

    return 0;
}

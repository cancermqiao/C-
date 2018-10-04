// 3.cc -- display in degrees
#include <iostream>
int main()
{
    using namespace std;
    const int kMinutesPerDegree = 60;
    const int kSecondsPerMinute = 60;
    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "Fist, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    float latitude = degrees + float(minutes) / kMinutesPerDegree + float(seconds) / (kSecondsPerMinute * kMinutesPerDegree);
    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << latitude << " degrees\n";

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph = 6.5;
    // PACE calculation
    double pace = 60 / mph; // minutes per mile

    //express pace in minutes and seconds
  int minutes = static_cast<int>(pace);
    int seconds = static_cast<int>(pace - minutes) * 60);

  //express your output in 1 decimal points
    cout << fixed << setprecision(1);
    cout << "pace: " << minutes << "minutes " << seconds << " seconds per mile" << endl;

    return 0;
}

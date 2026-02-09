#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int intProduct = a * b * c * d;
    int intAverage = (a + b + c + d) / 4;

    double dblProduct = static_cast<double>(a) * b * c * d;
    double dblAverage = (static_cast<double>(a) + b + c + d) / 4;

    cout << intProduct << " " << intAverage << endl;
    cout << fixed << setprecision(3) << dblProduct << " " << dblAverage << endl;

    return 0;
}

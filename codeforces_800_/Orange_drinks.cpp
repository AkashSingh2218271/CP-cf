#include <iostream>
#include <iomanip>
using namespace std;

/*
    By default, C++ outputs floating-point numbers in scientific notation if the number is too large or too small. The fixed manipulator changes that, ensuring that numbers are printed with a fixed number of decimal places.
    Without fixed, the output might be in scientific notation (e.g., 1.234568e+05).
    With fixed, the output is forced into a fixed-point format, showing the number as 123456.789000.
*/
int main() {
    int n;
    cin >> n;
    int drinks[n];
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> drinks[i];
    }

    for (int i = 0; i < n; i++) {
        sum += drinks[i];
    }

    double avg = sum / n;
    cout << fixed << setprecision(12) << avg << endl;

    return 0;
}
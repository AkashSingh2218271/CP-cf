// Problem: Orange Drinks - Calculate average volume of orange drinks
// Input: Number of drinks n, followed by n volumes
// Output: Average volume with 12 decimal places

#include <iostream>
#include <iomanip>
using namespace std;

/*
    By default, C++ outputs floating-point numbers in scientific notation if the number is too large or too small. 
    The fixed manipulator changes that, ensuring that numbers are printed with a fixed number of decimal places.
    Without fixed, the output might be in scientific notation (e.g., 1.234568e+05).
    With fixed, the output is forced into a fixed-point format, showing the number as 123456.789000.
*/
int main() {
    // Read number of drinks
    int n;
    cin >> n;
    
    // Create array to store drink volumes
    int drinks[n];
    // Initialize sum for calculating average
    double sum = 0;

    // Read volumes of each drink
    for (int i = 0; i < n; i++) {
        cin >> drinks[i];
    }

    // Calculate sum of all volumes
    for (int i = 0; i < n; i++) {
        sum += drinks[i];
    }

    // Calculate and output average with 12 decimal places
    double avg = sum / n;
    cout << fixed << setprecision(12) << avg << endl;

    return 0;
}
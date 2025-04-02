// Problem: Draw a Square - Check if given movements can form a square
// Input: Number of test cases t, followed by t cases containing:
//        l (left), r (right), d (down), u (up) movements
// Output: For each test case, print "yes" if movements can form a square, "no" otherwise

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read number of movements in each direction
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        // To form a square, all sides must be equal
        // Therefore, number of movements in each direction must be equal
        if (l == r && r == d && d == u) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}
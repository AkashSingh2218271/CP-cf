// Problem: Square or Not - Check if a binary string can form a square pattern
// Input: Number of test cases t, followed by t pairs of n (length) and binary string s
// Output: For each test case, print "yes" if string can form a square pattern, "no" otherwise

#include <iostream>
#include <cmath>
using namespace std;

// Function to check if the string can form a square pattern
void is_square() {
    // Read the length of string and the string itself
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // If length is less than 4, it cannot form a square
    if (n < 4) {
        cout << "no\n";
        return;
    }
    
    // Check if n is a perfect square
    int m = sqrt(n);
    if (m * m != n) { cout << "no" << endl; return; }
    
    // Check each position in the string
    for (int x = 0; x < n; x++)
    {
        // Convert 1D index to 2D coordinates
        int i = x / m;  // row
        int j = x % m;  // column
       
        // Check if current position is not on the border
        // For a square pattern, all inner positions should be '0'
        if (i != 0 && j != m - 1 && j != 0 && i != m - 1) {
            if (s[x] == '1') {
                cout << "no\n";
                return;
            }
        }
    }
    // If all checks pass, it can form a square pattern
    cout << "yes\n";
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        is_square();
    }
    
    return 0;
}
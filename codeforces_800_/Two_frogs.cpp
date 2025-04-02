// Problem: Two Frogs - Determine if two frogs can meet at the same position
// Input: Number of test cases t, followed by t cases containing:
//        n (number of positions), a (first frog's position), b (second frog's position)
// Output: For each test case, print "yes" if frogs can meet, "no" otherwise

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read number of positions and frog positions
        int n, a, b, diff;
        cin >> n >> a >> b;
    
        // Calculate distance between frogs (minus 1 for meeting point)
        diff = (a > b) ? a - b - 1: b - a - 1;
        // If distance is even, frogs cannot meet
        if (diff % 2 == 0) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
    
    return 0;
}
// Problem: Game of Division - Find if there exists a number that cannot be divided by k with any other number
// Input: Number of test cases t, followed by t cases containing:
//        n (array size), k (divisor), and n integers
// Output: For each test case, print "yes" and position if such number exists, "no" otherwise

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve the game for each test case
void game() {
        // Read array size and divisor
        int n, k;
        cin >> n >> k;
        
        // Create and read the input array
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check each number in the array
        for (int i = 0; i < n; i++) {
            bool f = 1;  // Flag to check if current number is valid
            // Compare with all other numbers
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;  // Skip self comparison
                }
                // Check if difference is divisible by k
                if (abs(a[i] - a[j]) % k == 0) {
                    f = 0; break;  // Current number is not valid
                }
            }
            // If we found a valid number
            if (f) {
                cout << "yes" << endl;
                cout << i + 1 << endl;  // Print 1-based position
                return;   
            }
        }
        // If no valid number found
        cout << "no" << endl;
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        game();
    }

    return 0;
}
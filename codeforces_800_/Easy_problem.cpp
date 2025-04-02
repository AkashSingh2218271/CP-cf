// Problem: Easy Problem - Count number of pairs (i,j) where i+j = n
// Input: Number of test cases t, followed by t numbers n
// Output: For each test case, print number of pairs (i,j) where i+j = n

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the number n
        int n;
        cin >> n;
        
        // Initialize variables
        int x = n - 1;  // x starts from n-1
        int pair = 0;   // count of pairs found

        // Check each number from 1 to n-1
        for (int i = 1; i < n; i++)
        {
            // If current number i equals n-x, we found a pair
            if (i == n - x) {
                ++pair;
            }
            x--;  // decrease x for next iteration
        }
        // Output number of pairs found
        cout << pair << endl;
    }
    
    return 0;
}
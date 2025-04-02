// Problem: Twice - Count pairs of equal numbers in an array
// Input: Number of test cases t, followed by t cases containing:
//        n (array size) and n integers
// Output: For each test case, print number of pairs of equal numbers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read array size and elements
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // Initialize score to count pairs
        int score = 0;
        // Sort array to find equal numbers easily
        sort(a.begin(), a.end());
        
        // Find pairs of equal numbers
        for (int i = 0; i < n; i++) {
            // Look for equal number starting from next position
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    ++score;  // Found a pair
                    i++;      // Skip the matched number
                    break;    // Move to next number
                }
            }
        }
        // Output number of pairs found
        cout << score << endl;
    }
    
    return 0;
}
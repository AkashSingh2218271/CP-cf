// Problem: Max Plus Size - Find maximum value of (element + position) for even and odd positions
// Input: Number of test cases t, followed by t arrays of size n
// Output: For each test case, print maximum possible value of (element + position)

#include <iostream>
#include <climits> 
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read array size and elements
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // Initialize variables for even and odd positions
        int max_val1 = INT_MIN, max_val2 = INT_MIN;  // Maximum values
        int sum1 = 0, sum2 = 0;                      // Count of positions
        
        // Process even positions (0, 2, 4, ...)
        for (int i = 0; i < n; i += 2)
        {
            sum1++;
            max_val1 = max(max_val1, a[i]);
        }
        
        // Process odd positions (1, 3, 5, ...)
        for (int i = 1; i < n; i += 2)
        {
            sum2++;
            max_val2 = max(max_val2, a[i]);
        }
    
        // Output maximum of (max_val1 + sum1) and (max_val2 + sum2)
        cout << max(max_val1 + sum1, max_val2 + sum2) << endl;
    }
    
    return 0;
}
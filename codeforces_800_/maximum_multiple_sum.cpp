// Include the standard input/output stream library
#include <iostream>
// Use the standard namespace to avoid writing std:: before standard library functions
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the input number n
        int n;
        cin >> n;

        // Initialize variables:
        // m will store the maximum sum found so far
        // ans will store the x value that gives the maximum sum
        int m = 0, ans = -1;
        
        // Iterate through all possible values of x from 2 to n
        for (int i = 2; i <= n; i++)
        {
            // Initialize sum for current x value
            int sum = 0;
            
            // Calculate sum of all multiples of current x that are ≤ n
            for (int j = 2; j <= n; j++)
            {
                // If the multiple (i*j) is less than or equal to n, add it to the sum
                if (i * j <= n) {
                    sum += i * j;   
                }
            }
            
            // Update maximum sum and answer if current sum is greater
            if (m < sum) {
                m = sum;
                ans = i;
            }
        }
        
        // If no valid x was found (which shouldn't happen), use n as the answer
        ans = ans == -1 ? n : ans;
        // Output the answer for current test case
        cout << ans << endl;
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}

/*
Improved Solution with O(n) Time Complexity:

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxSum = 0, optimalX = 2;  // Initialize with x = 2 as minimum possible value
        
        // Iterate through all possible values of x from 2 to n
        for (int x = 2; x <= n; x++) {
            // Calculate k = floor(n/x) - 1 (since we start from 2x)
            int k = (n / x) - 1;
            
            // If there are no multiples (k < 1), skip this x
            if (k < 1) continue;
            
            // Calculate sum using formula: x * (k * (k + 1)) / 2
            // We multiply by x at the end to get the actual sum of multiples
            int currentSum = x * (k * (k + 1)) / 2;
            
            // Update maximum sum and optimal x if current sum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
                optimalX = x;
            }
        }
        
        cout << optimalX << endl;
    }
    
    return 0;
}

Key Improvements:
1. Time Complexity: Reduced from O(n²) to O(n)
2. Mathematical Formula: Uses sum of first k natural numbers formula
3. Better Variable Names: maxSum and optimalX are more descriptive
4. Early Termination: Skips x values with no valid multiples
5. Memory Efficient: Still maintains O(1) space complexity

The formula used:
- For a given x, the sum of its multiples starting from 2x up to kx is:
  x * (2 + 3 + 4 + ... + k) = x * ((k * (k + 1) / 2) - 1)
- We subtract 1 because we start from 2x instead of x
- k is calculated as floor(n/x) - 1 to ensure kx ≤ n
*/
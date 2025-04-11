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
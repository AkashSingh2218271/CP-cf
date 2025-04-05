// Problem: Sum of Digits - Find sum of digits of a two-digit number
// Input: Number of test cases t (1 ≤ t ≤ 90), followed by t two-digit numbers n (10 ≤ n ≤ 99)
// Output: For each test case, print the sum of digits of n

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read two-digit number
        int n;
        cin >> n;

        // Initialize sum of digits
        int sum = 0;
        
        // Extract and sum each digit
        while (n > 0)
        {
            // Get last digit using modulo 10
            int d = n % 10;
            // Add digit to sum
            sum += d;
            // Remove last digit by integer division
            n /= 10;
        }
        // Output sum of digits
        cout << sum << endl;
    }
    
    return 0;
}
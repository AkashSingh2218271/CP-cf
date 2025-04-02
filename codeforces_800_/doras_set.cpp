// Problem: Dora's Set - Find maximum number of operations possible on a set of numbers
// Input: Number of test cases t, followed by t pairs of l and r (range)
// Output: For each test case, print maximum number of operations possible

#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate Greatest Common Divisor (GCD) of two numbers
// This is a helper function that might be used in the solution
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read the range [l, r]
        int l, r;
        cin >> l >> r;

        // If l is odd, decrease it by 1 to make it even
        // This ensures we start with an even number
        if (l % 2) { l--; }
        
        // Calculate number of odd numbers in the range
        int odd_count = (r - l + 1) / 2;
        
        // Maximum operations is half the number of odd numbers
        // because each operation uses two odd numbers
        int max_operation = odd_count / 2;

        // Output the result
        cout << max_operation << endl;
    }
    return 0;
}
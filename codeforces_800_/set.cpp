// Problem: Set - Count numbers in range [l,r] that are divisible by k
// Input: Number of test cases t, followed by t cases containing:
//        l (left bound), r (right bound), k (divisor)
// Output: For each test case, print count of numbers divisible by k in range [l,r]

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read range bounds and divisor
        int l, r, k;
        cin >> l >> r >> k;

        // Find greatest number in range that is divisible by k
        int greatest_number = r / k;
        // Calculate count of numbers divisible by k in range [l,r]
        int ans = greatest_number - l + 1;
        
        // If count is negative, there are no numbers divisible by k in range
        if (ans < 0) {
            cout << 0 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}

// Problem: Calculate Function - Find sum of alternating series 1-2+3-4+...+n
// Input: A single number n
// Output: The sum of the series 1-2+3-4+...+n

#include <iostream>
using namespace std;

// Function to calculate sum of alternating series
// For even n: sum = n/2
// For odd n: sum = -(n/2 + 1)
long long f(long long n) {
    if (n % 2 == 0) {
        return n / 2;  // For even n, sum is n/2
    } else {
        return -(n / 2 + 1);  // For odd n, sum is -(n/2 + 1)
    }
}

int main() {
    // Read input number
    long long n;
    cin >> n;
    // Calculate and output the sum
    cout << f(n) << endl;
    return 0;
}

// Problem: Minimize - Find minimum number of operations to make a equal to b
// Input: Number of test cases t, followed by t pairs of integers a and b
// Output: For each test case, print minimum number of operations needed

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the two numbers a and b
        int a, b;
        cin >> a >> b;

        // The minimum number of operations is the difference between b and a
        // This is because we can only increment a by 1 in each operation
        int ans = b - a;

        // Output the result
        cout << ans << endl;
    }
    return 0;
}
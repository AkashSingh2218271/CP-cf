// Problem: Array Divisibility - Create a beautiful array where sum of elements at positions
//          divisible by k is itself divisible by k, for all k from 1 to n
// Input: Number of test cases t, followed by t numbers n (array size)
// Output: For each test case, print a beautiful array of size n
// Note: A beautiful array always exists, and each element must be ≤ 10^5

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to generate a beautiful array of size n
void arr_div() {
    // Read array size
    int n;
    cin >> n;

    // The simplest solution is to use the sequence 1,2,3,...,n
    // This works because for any k, the sum of elements at positions
    // k, 2k, 3k,... will be k + 2k + 3k + ... = k(1 + 2 + 3 + ...)
    // which is always divisible by k
    for (int i = 1; i <= n; i++) {
        cout << i << " ";  // Print numbers 1 to n
    }
    cout << endl;  // End of array
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        arr_div();  // Generate beautiful array for current test case
    }
    
    return 0;
}
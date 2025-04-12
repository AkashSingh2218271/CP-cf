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
        // Read the dimensions of the table: n rows and m columns
        int n, m;
        cin >> n >> m;

        // The maximum sum of MEX values across all rows and columns
        // For any n x m table, the maximum sum is max(n+1, m+1)
        // This is because:
        // 1. The MEX of a row/column is the smallest non-negative integer not present
        // 2. To maximize the sum, we need to maximize the MEX values
        // 3. The maximum possible MEX for any row/column is n+1 or m+1
        // 4. We can achieve this by arranging numbers in a way that each row/column
        //    contains all numbers from 0 to n or 0 to m respectively
        cout << max(n + 1, m + 1) << endl;
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}
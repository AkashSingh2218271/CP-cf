// Problem: String - Count number of '1's in a binary string
// Input: Number of test cases t, followed by t binary strings
// Output: For each test case, print the count of '1's in the string

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the binary string
        string s;
        cin >> s;

        // Using STL count function to count occurrences of '1'
        // This is more efficient than manual counting
        cout << count(s.begin(), s.end(), '1') << endl;
        
        // Alternative solution (commented out):
        // int n = s.size(), ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '1') {
        //         ans++;
        //     }
        // }
        // cout << ans << endl;
    }
    
    return 0;
}
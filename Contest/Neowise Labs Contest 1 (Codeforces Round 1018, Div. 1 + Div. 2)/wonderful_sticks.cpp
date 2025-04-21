#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {  // Loop over each test case
        int n;
        cin >> n;  // Read the number of sticks

        string s;
        cin >> s;  // Read the string of comparisons ('<' or '>')

        vector<int> ans;  // This will hold a sequence of relative values
        ans.push_back(0);  // Start with the first stick represented as 0

        int l = 0, r = 0;  // l and r track the current minimum and maximum values in ans

        for (int i = 0; i < n - 1; i++) {  // Process each comparison in the string
            if (s[i] == '>') {
                // If current comparison is '>', next number must be greater than all previous
                ans.push_back(++r);  // Increment r and add to ans
            } else if (s[i] == '<') {
                // If current comparison is '<', next number must be smaller than all previous
                ans.push_back(--l);  // Decrement l and add to ans
            }
        }

        // Convert all values in ans to be positive and in range [1, n]
        // This is done by shifting everything by -(l - 1), or equivalently (1 - l)
        for (int num : ans) {
            cout << num - l + 1 << " ";  // Print adjusted value
        }

        cout << endl;  // End of test case output
    }

    return 0;  // Indicate that program ended successfully
}

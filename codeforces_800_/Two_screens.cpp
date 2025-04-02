// Problem: Two Screens - Find minimum number of operations to make two strings different
// Input: Number of test cases t, followed by t pairs of strings s and t
// Output: For each test case, print minimum number of operations needed

#include <iostream>
using namespace std;

// Function to find minimum number of operations needed
void min_operation()
{
    // Read the two strings
    string s, t;
    cin >> s >> t;

    // Get lengths of both strings
    int n = s.size(), m = t.size();
    // Find minimum length between the two strings
    int min_len = min(n, m);
    // Initialize answer as sum of lengths (maximum possible operations)
    int ans = n + m;

    // If first characters are different, we need maximum operations
    if (s[0] != t[0])
    {
        cout << ans << endl;
        return;
    }
    
    // Check each position up to minimum length
    for (int i = 1; i < min_len; i++)
    {
        // If characters match, we can reduce operations by 1
        if (s[i] == t[i])
        {
            ans--;
        }
        // If characters differ, we can't reduce operations further
        else
        {
            break;
        }
    }
    // Output the result
    cout << ans << endl;
}

int main()
{
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        min_operation();
    }
    return 0;
}
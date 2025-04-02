// Problem: Meaning Mean - Calculate the final mean after performing operations on array
// Input: Number of test cases t, followed by t arrays of size n
// Output: For each test case, print the final mean after performing operations

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read size of array
        int n;
        cin >> n;
        
        // Create and read the input array
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // Sort array in ascending order to process smallest elements first
        sort(a.begin(), a.end());
        
        // Initialize answer with mean of first two elements
        long long ans = (a[0] + a[1]) / 2;

        // Process remaining elements
        // For each element, take mean with current answer
        for (int i = 2; i < n; i++)
        {
            ans = (ans + a[i]) / 2;
        }
        
        // Output the final result
        cout << ans << endl;
    }
    
    return 0;
}
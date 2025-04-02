// Problem: Greedy Monocrap - Find minimum coins needed to make sum k
// Input: Number of test cases t, followed by t cases containing:
//        n (number of coins), k (target sum), and n coin values
// Output: For each test case, print minimum coins needed to make sum k

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read number of coins and target sum
        int n, k, last_i = -1, prefixSum = 0;
        cin >> n >> k;
        
        // Create and read coin values
        vector<int> coin(n);
        for (int i = 0; i < n; i++) {
            cin >> coin[i];
        }
        
        // Sort coins in descending order to use largest coins first
        sort(coin.begin(), coin.end(), greater<int>());
        
        // Try to make sum k using largest coins first
        for (int i = 0; i < n; i++) {
            prefixSum += coin[i];
            // If we found exact sum
            if (prefixSum == k) {
                break;
            } 
            // If we exceeded sum, remove last coin
            else if (prefixSum > k) {
                prefixSum -= coin[i];
                break;
            }
        }
        
        // Output remaining sum needed
        cout << k - prefixSum << endl;
    }

    return 0;
}
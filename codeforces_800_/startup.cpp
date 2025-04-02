// Problem: Startup - Find maximum profit from k investments with n days
// Input: Number of test cases t, followed by t cases containing:
//        n (days), k (investments), and k pairs of (day, profit)
// Output: For each test case, print maximum possible profit

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
        // Read number of days and investments
        int n, k;
        cin >> n >> k;
        
        // Arrays to store days and profits for each investment
        vector<int> b(k);  // days
        vector<int> c(k);  // profits
        // Array to store total profit for each day
        vector<int> total_sum(k+1);
        
        // Read investment details
        for (int i = 0; i < k; i++) {
            cin >> b[i] >> c[i];
        }
        
        // Calculate total profit for each day
        for (int i = 0; i < k; i++) {
            total_sum[b[i]] += c[i];
        }
        
        // Find maximum possible profit
        int max_profit = 0, i = 0;
        // We can only use min(n,k) investments
        int size = min(n, k);
        // Sort profits in descending order
        sort(total_sum.begin(), total_sum.end(), greater<int>());
        
        // Take top 'size' investments
        while (i < size) 
        {
            max_profit += total_sum[i];
            i++;
        }
        // Output maximum profit
        cout << max_profit << endl;   
    }
    
    return 0;
}

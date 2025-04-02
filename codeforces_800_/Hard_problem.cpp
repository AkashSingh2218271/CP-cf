// Problem: Hard Problem - Find maximum number of items that can be bought with m coins
// Input: Number of test cases t, followed by t cases containing:
//        m (coins), a (cost of first item), b (cost of second item), c (cost of third item)
// Output: For each test case, print maximum number of items that can be bought

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read number of coins and costs of items
        int m, a, b, c, left = 0, ans = 0;
        cin >> m >> a >> b >> c;

        // Initialize remaining coins for first two items
        int r1 = m, r2 = m;
        
        // Try to buy first item
        ans = r1 >= a ? a : r1;
        left += r1 >= a ? r1 - a : 0;
        
        // Try to buy second item
        ans += r2 >= b ? b : r2;
        left += r2 >= b ? r2 - b : 0;
        
        // Try to buy third item with remaining coins
        ans += left >= c ? c : left; 

        // Output maximum number of items that can be bought
        cout << ans << endl;
    }
    
    return 0;
}
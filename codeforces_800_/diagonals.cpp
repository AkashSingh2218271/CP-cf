#include <iostream>
using namespace std;

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the board size (n) and number of chips (k)
        long long n, k;
        cin >> n >> k;

        // Initialize variables:
        // - cell: represents the current diagonal size being considered
        // - ans: counts the minimum number of occupied diagonals
        long long cell = n, ans = 1;

        // Handle special cases
        if (k == 0) {
            // No chips, so no occupied diagonals
            cout << k << endl;
        } else if (k <= n) {
            // All chips fit in the first (largest) diagonal
            cout << 1 << endl;
        } else {
            // After using the first diagonal (size n), move to smaller diagonals
            cell--;
            // Subtract the chips placed on the first diagonal
            k -= n;

            // Process remaining chips using smaller diagonals
            while (cell > 0 && k >= cell)
            {
                // Use one diagonal of current 'cell' size
                ans++;
                k -= cell;

                // Check if there's enough chips for another diagonal of current 'cell' size
                if (k < cell) { 
                    break;
                }

                // Use another diagonal of current 'cell' size and move to next smaller size
                k -= cell;
                ans++;
                cell--;
            }

            // If there are remaining chips after the loop, use one more diagonal
            if (cell != 0 && k > 0) { 
                ans++;
            }

            // Output the result for the current test case
            cout << ans << endl;
        }
    }

    return 0;
}
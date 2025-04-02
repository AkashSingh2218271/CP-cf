// Problem: Game of Mathletes - Find pairs of numbers that sum to k
// Input: Number of test cases t, followed by t test cases
//        Each test case has n (array size), k (target sum), and n numbers
// Output: For each test case, print number of pairs that sum to k

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    while (t--)
    {
        // Initialize variables for current test case
        int n, k, score = 0;  // n: array size, k: target sum, score: pair count
        cin >> n >> k;
        
        // Read array of numbers
        int board[n];
        for (int i = 0; i < n; i++) {
            cin >> board[i];
        }

        // Sort array to use two-pointer technique
        sort(board, board + n);
        
        // Two pointers: s at start, e at end
        int s = 0, e = n - 1;
        while (s < e)
        {
            // Calculate sum of numbers at two pointers
            int sum = board[s] + board[e];
            if (sum == k) {
                score++;     // Found a valid pair
                s++;        // Move both pointers
                e--;
            } else if (sum > k) {
                e--;        // Sum too large, decrease end pointer
            } else {
                s++;        // Sum too small, increase start pointer
            }
        }
        // Output number of valid pairs found
        cout << score << endl;
    }
    
    return 0;
}
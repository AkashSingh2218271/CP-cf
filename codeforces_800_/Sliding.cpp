// Problem: Sliding - Calculate total distance moved by all people when one person leaves
// Input: Number of test cases t, followed by t cases containing:
//        n (rows), m (columns), r (row of leaving person), c (column of leaving person)
// Output: For each test case, print total distance moved by all people

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read grid dimensions and leaving person's position
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        // Calculate total distance using formula:
        // (n-r) * (2*m-1) + (m-c)
        // where:
        // (n-r) is number of rows below current row
        // (2*m-1) is distance for each row below (m-1 for moving right + 1 for moving up)
        // (m-c) is remaining distance in current row
        long long distance = (n - r) * (2 * m - 1) + (m - c);
        cout << distance << endl;
    }
    
    return 0;
}

/*
Alternative solution (commented out) using brute force:
1. For each person in the grid:
   - Skip the leaving person
   - Calculate their old and new positions
   - Add Manhattan distance between old and new positions
2. This solution is more intuitive but less efficient
*/

/*
#include <iostream>
#include <cmath>  // For abs() function
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;

        // Adjust the indices since (r, c) is 1-based but we are working with 0-based indices
        r--; 
        c--;

        int distance = 0;

        // Go over each person in the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // The person at (r, c) is leaving
                if (i == r && j == c) {
                    continue;
                }

                // Calculate the 1D index of the person in row-major order
                int old_index = i * m + j;
                int new_index = (i * m + j < r * m + c) ? old_index : old_index - 1;

                // The original position of the person
                int orig_r = old_index / m;
                int orig_c = old_index % m;

                // The new position of the person (after shifting)
                int new_r = new_index / m;
                int new_c = new_index % m;

                // Calculate the Manhattan distance for the movement
                distance += abs(orig_r - new_r) + abs(orig_c - new_c);
            }
        }
        
        cout << distance << endl;
    }

    return 0;
}

*/
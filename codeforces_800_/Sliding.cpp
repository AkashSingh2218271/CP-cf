#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long distance = (n - r) * (2 * m - 1) + (m - c);
        cout << distance << endl;
    }
    
    return 0;
}

/*
(n - r) row below curr leaving person row.
(m - 1) + 1 distance traveled by first person of each row to go to the last place of previous row.
(m - c) distance traveled by remaining person in the current row.
(m - 1) distance traveled by each person except first person in every row below the current row.
current row -> the row from where person moved.
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
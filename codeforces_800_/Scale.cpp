// Problem: Scale - Scale down a matrix by factor k
// Input: Number of test cases t, followed by t cases containing:
//        n (matrix size), k (scaling factor), and n x n matrix
// Output: For each test case, print the scaled down matrix

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read matrix size and scaling factor
        int n, k;
        cin >> n >> k;
        
        // Create and read the input matrix
        vector<string> m(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        // Scale down the matrix by factor k
        // For each k x k block, we only take the first character
        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k)
            {
                // Print the first character of each k x k block
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
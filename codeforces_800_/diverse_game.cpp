/*
Problem Statement:
Petr wants to create a new matrix b from given matrix a (n×m) where:
1. Both matrices contain all integers from 1 to n⋅m
2. For every position (i,j), a[i][j] ≠ b[i][j]
3. If n=1 and m=1, output -1 (impossible case)
*/

#include <iostream>
#include <vector>
using namespace std;

/*
Original solution using matrix rotation and swapping:
1. Rotates each row by one position
2. Swaps adjacent rows to ensure diversity
3. Checks if any position matches with original matrix
4. Outputs -1 if any match found, else prints the new matrix
*/

/*
void diverse() {
    // Read matrix dimensions
    int n, m;
    cin >> n >> m;
    
    // Initialize and read the input matrix
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Handle special case of 1x1 matrix
    if (n == 1 && m == 1) { cout << -1 << endl; return; }

    // Create new matrix b by rotating each row
    int b[n][m];
    for (int i = 0; i < n; i++) {
        // Store first element
        int t = a[i][0], j = 0;
        // Shift all elements left by one position
        for (j = 0; j < m; j++) {
            if (j == 0) { continue; }
            b[i][j - 1] = a[i][j];
        }
        // Place first element at the end
        b[i][j - 1] = t;
    }

    // Swap adjacent rows to ensure diversity
    for (int i = 0; i < n / 2; i += 2) {
        for (int j = 0; j < m; j++) {
            int t = b[i][j];
            b[i][j] = b[i + 1][j];
            b[i + 1][j] = t;
        }
    }

    // Check if any position matches with original matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == b[i][j]) {
                cout << -1 << endl;
                return;
            }
        }
    }
    
    // Print the valid matrix b
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }   
}
*/

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read matrix dimensions
        int n, m;
        cin >> n >> m;

        // Process and output matrix b directly
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a; 
                cin >> a;  // Read element from matrix a
                
                // Transform each element to create matrix b:
                // 1. For 1x1 matrix, output -1
                // 2. For n*m (largest element), make it 1
                // 3. For all other elements, increment by 1
                if (n == 1 && m == 1) { a = -1; }
                else if (a == n*m) { a = 1; }
                else { a++; }
                
                // Output the transformed element with space/newline
                cout << a << " \n"[j + 1 == m];  // Uses string indexing for space/newline
            }
        }
    }
    
    return 0;
}
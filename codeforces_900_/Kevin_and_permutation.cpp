// Problem: Kevin and Permutation - Generate a permutation with specific properties
// Input: Number of test cases t, followed by t pairs of numbers n and k
//        n: length of permutation, k: minimum difference between adjacent elements
// Output: For each test case, print a permutation of length n where adjacent elements differ by at least k

#include <iostream>
#include <vector>
using namespace std;

// Function to generate a permutation with minimum difference k between adjacent elements
void minimizePermutation(int n, int k) {
    // Initialize permutation array with zeros
    vector<int> perm(n, 0);
    int index = 0;  // Tracks current number to be placed

    // First pass: Place numbers at positions that are k apart
    for (int i = k; i <= n; i += k) {
        perm[i - 1] = index + 1;
        index++;
    }

    // Second pass: Fill remaining positions with unused numbers
    for (int i = 0; i < n; i++) {
        if (perm[i] == 0) {
            perm[i] = index + 1;
            index++;
        }
    }

    // Output the generated permutation
    for (int i = 0; i < n; ++i) {
        cout << perm[i] << " ";
    }
    cout << endl;
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        int n, k;
        cin >> n >> k;  // Read permutation length and minimum difference
        minimizePermutation(n, k);
    }

    return 0;
}

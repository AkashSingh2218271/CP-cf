// Problem: Line Breaks - Find maximum number of words that can fit in a line of length m
// Input: Number of test cases t, followed by t cases containing:
//        n (number of words), m (line length), and n words
// Output: For each test case, print maximum number of words that can fit in the line

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read number of words and line length
        int n, m, max_word = 0;
        cin >> n >> m;
        string s;

        // Process each word
        for (int i = 0; i < n; i++) {
            // Read the word
            cin >> s;
            int len = s.size();
            // If word can fit in remaining space
            if (m - len >= 0) {
                max_word++;  // Count this word
            }
            // Update remaining space
            m -= len;
        }
        // Output maximum number of words that can fit
        cout << max_word << endl;
    }
    
    return 0;
}
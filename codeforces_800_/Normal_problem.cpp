// Problem: Normal Problem - Mirror a string and swap 'p' and 'q'
// Input: Number of test cases t, followed by t strings
// Output: For each test case, print the mirrored string with 'p' and 'q' swapped

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read input string
        string s;
        cin >> s;
        
        // Initialize pointers for mirroring
        int i = s.size() - 1;  // Start from end of string
        int j = 0;             // Start from beginning of result
        // Create vector to store result
        vector<char> str(s.size());

        // Mirror the string and swap 'p' and 'q'
        while (i >= 0) {
            // If character is 'p', make it 'q' and vice versa
            // Otherwise keep the character as is
            str[j] = (s[i] == 'p') ? 'q' : (s[i] == 'q') ? 'p' : s[i];
            i--;
            j++;
        }

        // Convert vector to string and output
        cout << string(str.begin(), str.end()) << endl;
    }
    
    return 0;
}

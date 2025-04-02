// Problem: Replace Character - Replace one occurrence of least frequent character
// Input: Number of test cases t, followed by t test cases
//        Each test case has string length n and a string s
// Output: For each test case, print the string after replacing one occurrence of
//         least frequent character with most frequent character (if exists)

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to replace one occurrence of least frequent character
void replace(int t, const string& str) {
    // Count frequency of each character (a-z)
    int count[26] = {0};
    for (char c : str) {
        count[c - 'a']++;
    }

    // Find least and most frequent characters
    int max_count = INT_MIN, min_count = INT_MAX;
    char max_character = '-', min_character = '_';

    // First pass: Find least frequent character
    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0 && min_count > count[i]) {
            min_count = count[i];
            min_character = static_cast<char>('a' + i);
        }
    }

    // Second pass: Find most frequent character (different from least frequent)
    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0 && max_count < count[i] && static_cast<char>('a' + i) != min_character) {
            max_count = count[i];
            max_character = static_cast<char>('a' + i);
        }
    }

    // Create answer string and replace first occurrence of least frequent character
    string ans = str;
    for (int i = 0; i < ans.size(); ++i) {
        if (ans[i] == min_character) {
            // If no most frequent character found, use last character
            ans[i] = (max_character == '-') ? ans[ans.size() - 1] : max_character;
            break;
        }
    }

    // Output modified string
    cout << ans << endl;
}

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        int n;
        cin >> n;          // Read string length
        string s;
        cin >> s;          // Read input string
        replace(t + 1, s); // Process string
    }

    return 0;
}

#include <iostream>
using namespace std;

// Function to check if a given string could be a miswritten form of 10^x (x ≥ 2)
void primary_task() {
    // Read the input string that represents a number
    string s;
    cin >> s;
    int n = s.length();
    
    // If length is 2 or less, it can't be 10^x (x ≥ 2) since minimum would be 100
    if (n <= 2) { cout << "no\n"; return; } 
    
    // Check if the number starts with "10" which is required for 10^x
    if (s[0] == '1' && s[1] == '0') {
        // Extract the remaining part after "10"
        string str = "";
        for (int i = 2; i < n; i++) {
            str += s[i];   
        }
    
        // If the remaining part is just "1" or starts with '0', it's invalid
        // because 10^1 = 10 (x must be ≥ 2) and numbers can't start with 0
        if (str == "1" || str[0] == '0') {
            cout << "no\n";
            return;
        } else {
            // If it passes all checks, it could be a valid 10^x number
            cout << "yes\n";
        }
    } else {
        // If it doesn't start with "10", it can't be 10^x
        cout << "no\n";
        return;
    }
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        primary_task();
    }
    
    return 0;
}
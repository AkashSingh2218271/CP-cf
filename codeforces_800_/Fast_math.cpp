// Problem: Fast Math - Perform XOR operation on two binary numbers
// Input: Two binary numbers of equal length
// Output: Result of XOR operation on the two numbers

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Read binary numbers as strings
    string s1, s2;
    cin >> s1 >> s2;

    // ans to store the XOR operation result
    string ans = "";

    // Perform XOR on each corresponding digit
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] == s2[i]) {
            ans += "0";  // Same bits, XOR result is 0
        } else {
            ans += "1";  // Different bits, XOR result is 1
        }
    }

    // Output the XOR result
    cout << ans << endl;

    return 0;
}

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Read binary numbers as strings
    string s1, s2;
    cin >> s1 >> s2;

    // ans to store the XOR operation
    string ans = "";

    // Perform XOR on each corresponding digit
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] == s2[i]) {
            ans += "0";  // Same bits, ans is 0
        } else {
            ans += "1";  // Different bits, ans is 1
        }
    }

    // Output the ans
    cout << ans << endl;

    return 0;
}

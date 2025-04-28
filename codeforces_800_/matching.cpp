#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int spaces = count(s.begin(), s.end(), '?');
        if (s[0] == '0') {
            cout << 0 << endl;
        } else if (s[0] == '?') {
            cout << 9 * pow(10, spaces - 1) << endl;
        } else {
            cout << pow(10, spaces) << endl;
        }
    }
    
    return 0;
}
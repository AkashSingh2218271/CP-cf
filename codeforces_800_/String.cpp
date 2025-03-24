#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // int n = s.size(), ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '1') {
        //         ans++;
        //     }
        // }

        // cout << ans << endl;
        cout << count(s.begin(), s.end(), '1') << endl;
    }
    
    return 0;
}
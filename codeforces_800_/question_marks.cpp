#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        for (auto it : s) mp[it]++;

        int ans = 0;
        ans += min(n, mp['A']);
        ans += min(n, mp['B']);
        ans += min(n, mp['C']);
        ans += min(n, mp['D']);
        
        cout << ans << endl;
    }
    
    return 0;
}
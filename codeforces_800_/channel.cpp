#include <iostream>
using namespace std;

void solve() {
    int n, m, q;
        cin >> n >> m >> q;
        string s;
        cin >> s;
        
        int mmax = m;
        int tot = m;

        for (auto e : s) {
            m += (e == '+');
            m -= (e == '-');

            mmax = max(mmax, m);
            tot += (e == '+');
        }

        if (mmax == n) {
            cout << "YES\n";
        } else if (tot >= n) {
            cout << "MAYBE\n";
        } else {
            cout << "NO\n";
         }
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
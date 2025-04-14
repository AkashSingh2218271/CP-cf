#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> g(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> g[i][j];
            }
        }

        cout << "Grid g:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }

        int m = n * 2;
        int ans[m] = {0};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[i + j + 1] = g[i][j];
            }
        }
        
        int sum = m * (m + 1) / 2;
        int s = 0;
        for (int i = 0; i < m; i++) {
            s += ans[i];
        }
        
        // cout << "s " << sum << " s2 " << s << endl;
        ans[0] = sum - s;
        for (int i = 0; i < m; i++) {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}

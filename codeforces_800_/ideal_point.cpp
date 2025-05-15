#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int l, r, sl = 0, sr = 0;
        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            
            if (l == k) { sl = 1; }
            if (r == k) { sr = 1; }
        }

        if (sl == 1 && sr == 1) { cout << "yes\n"; } else { cout << "no\n"; }
    }
    
    return 0;
}
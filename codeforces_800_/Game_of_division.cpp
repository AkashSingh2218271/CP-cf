#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void game() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            bool f = 1;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (abs(a[i] - a[j]) % k == 0) {
                    f = 0; break;
                }
            }
            if (f) {
                cout << "yes" << endl;
                cout << i + 1 << endl;
                return;   
            }
        }
        cout << "no" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        game();
    }

    return 0;
}
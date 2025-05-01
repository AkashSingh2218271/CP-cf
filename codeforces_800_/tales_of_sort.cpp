#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1]) {
                f = false; break;
            }
        }

        if (f) {
            cout << 0 << endl;
        } else {
            int m = 0;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] > a[i + 1]) {
                    m = max(m, a[i]);
                }
            }
            cout << m << endl;
        }   
    }
    
    return 0;
}
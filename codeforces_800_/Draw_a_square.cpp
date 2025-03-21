#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l == r && r == d && d == u) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}
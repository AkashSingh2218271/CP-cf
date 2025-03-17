#include <iostream>
#include <vector>
using namespace std;

int count_multiples(int x, int l, int r) {
    return r / x - (l - 1) / x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        int ans = 0;

        for (int x = l; x <= r; x++) {
            int num_multiples = count_multiples(x, l, r);
            if (num_multiples >= k) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

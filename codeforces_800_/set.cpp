#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;

        int greatest_number = r / k;
        int ans = greatest_number - l + 1;

        cout << ans << endl;
    }

    return 0;
}

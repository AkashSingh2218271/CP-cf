#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    while (n--) {
        int p, q;
        cin >> p >> q;
        
        if (p == q) {

        } else if (p < q) {
            int diff = q - p;
            if (diff >= 2) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
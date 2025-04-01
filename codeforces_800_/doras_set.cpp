#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if (l % 2) { l--; }
        int odd_count = (r - l + 1) / 2;
        int max_operation = odd_count / 2;

        cout << max_operation << endl;
    }
    return 0;
}
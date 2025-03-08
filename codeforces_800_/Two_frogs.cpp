#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, diff;
        cin >> n >> a >> b;
    
        diff = (a > b) ? a - b - 1: b - a - 1;
        if (diff % 2 == 0) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
    
    return 0;
}
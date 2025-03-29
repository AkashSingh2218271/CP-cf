#include <iostream>
#include <cmath>
using namespace std;

void is_square() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if (n < 4) {
        cout << "no\n";
        return;
    }
    
    int m = sqrt(n);
    if (m * m != n) { cout << "no" << endl; return; }
    //cout << m << endl;
    for (int x = 0; x < n; x++)
    {
        int i = x / m;
        int j = x % m;
       
        if (i != 0 && j != m - 1 && j != 0 && i != m - 1) {
            // cout << "i " << i << " j " << j << " s " << s[x] << endl;
            if (s[x] == '1') {
                cout << "no\n";
                return;
            }
        }
    }
    cout << "yes\n";
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        is_square();
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        int max_one = 0;
        bool f = false;

        for (int i = 1; i <= n; i += k) {
            if (i == n) { f = true; }
            max_one++;
        }
        
        if (!f) { max_one++; }
        cout << max_one << endl;
    }
    
    return 0;
}
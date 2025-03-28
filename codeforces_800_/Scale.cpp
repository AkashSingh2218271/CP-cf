#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> m(n);
        
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k)
            {
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
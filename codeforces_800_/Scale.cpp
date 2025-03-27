#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int m[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
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
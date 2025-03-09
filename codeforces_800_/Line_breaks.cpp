#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, max_word = 0;
        cin >> n >> m;
        string s;

        for (int i = 0; i < n; i++) {
            cin >> s;
            int len = s.size();
            if (m - len >= 0) {
                max_word++;
            }
            m -= len;
        }
        cout << max_word << endl;
    }
    
    return 0;
}
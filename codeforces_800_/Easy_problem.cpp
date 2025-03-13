#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int x = n - 1, pair = 0;

        for (int i = 1; i < n; i++)
        {
            if (i == n - x) {
                ++pair;
            }
            x--;
        }
        cout << pair << endl;
    }
    
    return 0;
}
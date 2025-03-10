#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c, left = 0, ans = 0;
        cin >> m >> a >> b >> c;

        int r1 = m, r2 = m;
        ans = r1 >= a ? a : r1;
        left += r1 >= a ? r1 - a : 0;
        ans += r2 >= b ? b : r2;
        left += r2 >= b ? r2 - b : 0;
        ans += left >= c ? c : left; 

        cout << ans << endl;
    }
    
    return 0;
}
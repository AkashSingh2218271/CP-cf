#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        long long ans = (a[0] + a[1]) / 2;

        for (int i = 2; i < n; i++)
        {
            ans = (ans + a[i]) / 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}
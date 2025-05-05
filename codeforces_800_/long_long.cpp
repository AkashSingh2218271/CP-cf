#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int count = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                sum += a[i];
                continue;
            }
            while (i < n && a[i] <= 0)
            {
                sum += abs(a[i]);
                i++;
            }
            count++;
            i--;
        }

        cout << sum << " " << count << endl;
    }

    return 0;
}
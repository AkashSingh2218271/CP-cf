#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool check1(vector<int>& a, int n)
{   
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            continue;
        }
        else
        {
            idx = i;
        }
    }

    if (idx != -1)
    {
        for (int j = idx; j < n; j++)
        {
            if (a[j] <= 0)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

bool check2(vector<int>& a, int n)
{
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            continue;
        }
        else
        {
            idx = i;
        }
    }
    if (idx != -1)
    {
        for (int j = idx; j < n; j++)
        {
            if (a[j] >= 0)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int count_p = 0, count_n = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] > 0)
            {
                count_p++;
                sum += a[i];
            }
            else if (a[i] < 0)
            {
                sum += abs(a[i]);
                count_n++;
            }
        }

        if (check1(a, n) || check2(a, n))
        {
            cout << sum << " " << 1 << endl;
        }
        else
        {
            cout << sum << " " << min(count_n, count_p + 1) << endl;
        }
    }

    return 0;
}
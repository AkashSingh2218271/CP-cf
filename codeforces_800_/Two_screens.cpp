#include <iostream>
using namespace std;

void min_operation()
{
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();
    int min_len = min(n, m);
    int ans = n + m;

    if (s[0] != t[0])
    {
        cout << ans << endl;
        return;
    }
    for (int i = 1; i < min_len; i++)
    {
        if (s[i] == t[i])
        {
            ans--;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        min_operation();
    }
    return 0;
}
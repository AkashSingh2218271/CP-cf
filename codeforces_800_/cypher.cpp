#include <iostream>
#include <vector>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)  // FIXED: changed loop variable to j
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    if (a[i] == 9)
                    {
                        a[i] = 0;
                    }
                    else
                    {
                        a[i]++;
                    }
                }
                if (c == 'U')
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else
                    {
                        a[i]--;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

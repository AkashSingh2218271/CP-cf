#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int> st;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }

        int l = st.size();
        cout<<((n-l)%2==0?l:l-1)<<endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.size();
        
        string ans;
        ans += s[0];
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ' && i != n-1) {
                ans += s[i + 1];
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
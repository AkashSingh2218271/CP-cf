#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int i = s.size() - 1, j = 0;
        vector<char> str(s.size());

        while (i >= 0) {
            str[j] = (s[i] == 'p') ? 'q' : (s[i] == 'q') ? 'p' : s[i];
            i--;
            j++;
        }

        cout << string(str.begin(), str.end()) << endl;
    }
    
    return 0;
}

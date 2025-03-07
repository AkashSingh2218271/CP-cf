#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void replace(int t, const string& str) {
    int count[26] = {0};
    
    for (char c : str) {
        count[c - 'a']++;
    }

    int max_count = INT_MIN, min_count = INT_MAX;
    char max_character = '-', min_character = '_';

    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0 && min_count > count[i]) {
            min_count = count[i];
            min_character = static_cast<char>('a' + i);
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0 && max_count < count[i] && static_cast<char>('a' + i) != min_character) {
            max_count = count[i];
            max_character = static_cast<char>('a' + i);
        }
    }

    string ans = str;
    for (int i = 0; i < ans.size(); ++i) {
        if (ans[i] == min_character) {
            ans[i] = (max_character == '-') ? ans[ans.size() - 1] : max_character;
            break;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        replace(t + 1, s);
    }

    return 0;
}

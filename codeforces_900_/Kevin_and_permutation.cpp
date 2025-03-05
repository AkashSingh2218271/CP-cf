#include <iostream>
#include <vector>
using namespace std;

void minimizePermutation(int n, int k) {
    vector<int> perm(n, 0);
    int index = 0;

    
    for (int i = k; i <= n; i += k) {
        perm[i - 1] = index + 1;
        index++;
    }

    for (int i = 0; i < n; i++) {
        if (perm[i] == 0) {
            perm[i] = index + 1;
            index++;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << perm[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;  
        minimizePermutation(n, k);
    }

    return 0;
}

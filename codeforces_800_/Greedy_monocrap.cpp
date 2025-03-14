#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, last_i = -1, prefixSum = 0;
        cin >> n >> k;
        vector<int> coin(n);

        for (int i = 0; i < n; i++) {
            cin >> coin[i];
        }
        
        sort(coin.begin(), coin.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            prefixSum += coin[i];
            if (prefixSum == k) {
                break;
            } else if (prefixSum > k) {
                prefixSum -= coin[i];
                break;
            }
        }
        
        cout << k - prefixSum << endl;
    }

    return 0;
}
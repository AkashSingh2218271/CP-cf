#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> b(k);
        vector<int> c(k);
        vector<int> total_sum(k+1);
        for (int i = 0; i < k; i++) {
            cin >> b[i] >> c[i];
        }
        
        for (int i = 0; i < k; i++) {
            total_sum[b[i]] += c[i];
        }
        
        int  max_profit = 0, i = 0, size = min(n, k);
        sort(total_sum.begin(), total_sum.end(), greater<int>());
        
        while (i < size) 
        {
            max_profit += total_sum[i];
            i++;
        }
        cout << max_profit << endl;   
    }
    
    return 0;
}

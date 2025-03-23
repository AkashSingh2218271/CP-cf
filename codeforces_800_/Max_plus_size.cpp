#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int max_val1 = INT_MIN, max_val2 = INT_MIN, sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            sum1++;
            max_val1 = max(max_val1, a[i]);
        }
        
        for (int i = 1; i < n; i += 2)
        {
            sum2++;
            max_val2 = max(max_val2, a[i]);
        }
    
        cout << max(max_val1 + sum1, max_val2 + sum2) << endl;
    }
    
    return 0;
}
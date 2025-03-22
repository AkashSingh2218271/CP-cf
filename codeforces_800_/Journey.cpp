#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int sum = a + b + c;
        int total_days = 3;
        int rem = n % sum;
        int days = n / sum;
        total_days *= days;
        
        while (rem != 0)
        {
            rem -= a;
            total_days++;
            if (rem <= 0) { break; }
            rem -= b;
            total_days++;
            if (rem <= 0) { break; }
            rem -= c;
            total_days++;
            if (rem <= 0) { break; }
        }
        
        cout << total_days << endl;
    }
    
    return 0;
}
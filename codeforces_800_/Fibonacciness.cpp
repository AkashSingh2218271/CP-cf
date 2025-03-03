#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> fib(4);
        int f1 = 0, f2 = 0; 

        for (int i = 0; i < 4; i++) {
                cin >> fib[i];
        }
        fib.insert(fib.begin() + 2, fib[0] + fib[1]);

        for (int i = 0; i < 3; i++) {
            if (fib[i] + fib[i + 1] == fib[i + 2]) {
                f1++;
            }
        }
        
        fib[2] = fib[4] - fib[3];
        for (int i = 0; i < 3; i++) {
            if (fib[i] + fib[i + 1] == fib[i + 2]) {
                f2++;
            }
        }
        
        cout << max(f1, f2) << endl;
    }
    
    return 0;
}
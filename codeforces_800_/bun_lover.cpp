#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long size = n;
        size++;

        cout << n * size + (size + 1) << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        for (int i = 0; i < 5; i++) {
            int m = min(min(a,b), c);

            if (a == m) {
                a++;
            } else if (b == m) {
                b++;
            } else {
                c++;
            }
        }

        cout << a * b * c << endl;
    }
    
    return 0;
}
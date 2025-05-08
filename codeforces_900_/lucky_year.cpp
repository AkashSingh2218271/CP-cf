#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long y;
    cin >> y;

    if (0 <= y && y <= 9) {
        cout << 1 << endl;
    } else if (y >= 10 && y <= 99) {
        // if (y == 10) { cout << 10 << endl; }
        if (y == 20 || y == 30 || y == 40 || y == 50 || y == 60 || y == 70 || y == 80 || y == 90) {
            cout << 10;
        } else {
            long long x = y, d = 0;
            while (x != 0)
            {
                d = x % 10;
                x /= 10;
            }
            cout << ((d + 1) * 10) - y << endl;
        }
    } else {
        long long c = 0, x = y, d = 0;
        while (x != 0)
        {
            d = x % 10;
            x /= 10;
            c++;
        }

        c--;
        double num = pow(10, c);
        num *= d;

        if (num == y) {
            // cout << "num " << pow(10, c) << " c " << c-1  << " d " << d << endl;
            cout << static_cast<long long>(num / d) << endl;
        } else {
            d++;
            double n = pow(10, c);
            n *= d;
            cout << static_cast<long long>(n - y) << endl;
        }
    }

    return 0;
}
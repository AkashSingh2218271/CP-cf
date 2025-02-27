#include <iostream>
using namespace std;

long long f(long long n) {
    if (n % 2 == 0) {
        return n / 2;  // Sum for even n
    } else {
        return -(n / 2 + 1);  // Sum for odd n
    }
}

int main() {
    long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

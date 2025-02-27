#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, groups = 1;
    cin >> n;
    string prev_pole;

    while (n--) {
        string pole;
        cin >> pole;

        if (!prev_pole.empty() && prev_pole != pole) {
            groups++;
        }

        prev_pole = pole;
    }
    cout << groups << endl;

    return 0;
}

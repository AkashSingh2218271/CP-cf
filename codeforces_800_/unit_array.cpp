#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int pos_count = 0, neg_count = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0) {
                pos_count++;
            } else {
                neg_count++;
            }
        }

        if (pos_count >= neg_count) {
            cout << (neg_count % 2) << "\n";
        } else {
            int diff = (neg_count - pos_count + 1) / 2;
            neg_count -= diff;
            if (neg_count % 2) { diff++; }
            cout << diff << endl;
        }
    }
    
    return 0;
}
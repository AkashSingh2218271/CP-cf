#include <iostream>
using namespace std;

void presents(int *frnd, int n) {
    int answer[n];

    for (int i = 0; i < n; i++) {
        ans[frnd[i] - 1] = i + 1;
    }

    for (int ans : answer) {
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int frnd[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> frnd[i];
    }
    
    presents(frnd, n);

    return 0;
}
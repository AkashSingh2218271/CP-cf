#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, score = 0;
        cin >> n >> k;
        int board[n];
        for (int i = 0; i < n; i++) {
            cin >> board[i];
        }

        sort(board, board + n);
        int s = 0, e = n - 1;
        while (s < e)
        {
            int sum = board[s] + board[e];
            if (sum == k) {
                score++;
                s++;
                e--;
            } else if (sum > k) {
                e--;
            } else {
                s++;
            }
        }
        cout << score << endl;
    }
    
    return 0;
}
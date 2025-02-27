#include <iostream>
using namespace std;

void easy_hard(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cout << "HARD\n";
            return;
        }
    }

    cout << "EASY\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    easy_hard(n, arr);

    return 0;
}
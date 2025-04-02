// Problem: Presents - Find who gave present to each person
// Input: Number of people n, followed by n numbers representing who each person gave a present to
// Output: For each person, print who gave them a present

#include <iostream>
using namespace std;

// Function to find who gave present to each person
void presents(int *frnd, int n) {
    // Array to store who gave present to each person
    int answer[n];

    // For each person i, they gave present to frnd[i]
    // So person frnd[i] received present from i+1
    for (int i = 0; i < n; i++) {
        answer[frnd[i] - 1] = i + 1;
    }

    // Output who gave present to each person
    for (int ans : answer) {
        cout << ans << " ";
    }
    cout << endl;
}

int main() {
    // Read number of people
    int n;
    cin >> n;
    
    // Create array to store who each person gave present to
    int frnd[n];
    
    // Read who each person gave present to
    for (int i = 0; i < n; i++)
    {
        cin >> frnd[i];
    }
    
    // Find and print who gave present to each person
    presents(frnd, n);

    return 0;
}
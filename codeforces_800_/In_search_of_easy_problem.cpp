// Problem: In Search of an Easy Problem - Determine if a problem is easy or hard
// Input: Number of people n, followed by n numbers (0 or 1) representing opinions
// Output: "EASY" if all opinions are 0, "HARD" if any opinion is 1

#include <iostream>
using namespace std;

// Function to determine if problem is easy or hard
// If any person thinks problem is hard (1), then problem is hard
void easy_hard(int n, int arr[]) {
    // Check each person's opinion
    for (int i = 0; i < n; i++) {
        // If anyone thinks problem is hard
        if (arr[i] == 1) {
            cout << "HARD\n";
            return;
        }
    }

    // If no one thinks problem is hard
    cout << "EASY\n";
}

int main() {
    // Read number of people
    int n;
    cin >> n;
    // Create array to store opinions
    int arr[n];
    // Read each person's opinion
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Determine if problem is easy or hard
    easy_hard(n, arr);

    return 0;
}
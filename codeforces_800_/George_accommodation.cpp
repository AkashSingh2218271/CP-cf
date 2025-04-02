// Problem: George and Accommodation - Count number of rooms with space for George
// Input: Number of rooms n, followed by n pairs of numbers p (people already in room) and q (room capacity)
// Output: Number of rooms where George can stay (at least 2 free spaces needed)

#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    int n, ans = 0;  // n: number of rooms, ans: count of suitable rooms
    cin >> n;        // Read number of rooms

    // Process each room
    while (n--) {
        // Read current room details
        int p, q;           // p: people in room, q: room capacity
        cin >> p >> q;      // Read room details
        
        // If room is full, skip
        if (p == q) {
            // No space available
        } 
        // If room has some space
        else if (p < q) {
            // Calculate available space
            int diff = q - p;
            // If at least 2 spaces available (1 for George and 1 for friend)
            if (diff >= 2) {
                ans++;  // Count this room
            }
        }
    }
    // Output number of suitable rooms
    cout << ans << endl;

    return 0;
}
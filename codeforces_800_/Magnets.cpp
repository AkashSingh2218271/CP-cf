// Problem: Magnets - Count number of groups formed by magnets
// Input: Number of magnets n, followed by n strings representing magnet poles (10 or 01)
// Output: Number of groups formed by magnets (magnets with same poles repel)

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize variables
    int n, groups = 1;  // Start with 1 group as minimum
    cin >> n;          // Read number of magnets
    string prev_pole;  // Store previous magnet's pole configuration

    // Process each magnet
    while (n--) {
        string pole;
        cin >> pole;  // Read current magnet's pole configuration

        // If previous magnet exists and has different pole configuration
        // then we have a new group
        if (!prev_pole.empty() && prev_pole != pole) {
            groups++;
        }

        // Update previous pole for next iteration
        prev_pole = pole;
    }
    // Output total number of groups
    cout << groups << endl;

    return 0;
}

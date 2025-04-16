// Include the iostream library to allow input/output operations
#include <iostream>
// Include the cmath library to use the abs() function for absolute value
#include <cmath>
// Use the standard namespace to avoid prefixing std:: before every standard object
using namespace std;

int main() {
    // Declare an integer variable to store the number of coins
    int n;
    // Read the number of coins from user input
    cin >> n;

    // Loop through each coin
    for (int i = 0; i < n; i++)
    {
        // Declare variables to store the x and y coordinates of the coin
        int x, y;
        // Read the coordinates of the current coin
        cin >> x >> y;

        // If the coin is below the starting point (y < 0), i.e., already falling past or under Monocarp
        if (y < 0) {
            // Check if the character can reach it in time
            // Since Monocarp starts at (0,0), he must reach (x,y) in exactly y seconds (as coin falls one unit per second)
            // But since y is negative, we check how far it already has fallen and if Monocarp could reach in that time
            if (abs(y - 0) > 1) {
                // If it has fallen more than 1 unit below and Monocarp can't reach it in time, print "no"
                cout << "no\n";
            } else {
                // Otherwise, it might be within reach (only fallen by 1), print "yes"
                cout << "yes\n";
            }
        } else {
            // If the coin is at y ≥ 0, Monocarp has time to move and catch it
            // He can move 1 unit per second and since coin falls 1 unit per second,
            // He can catch it if |x| ≤ y (this logic is missing in this code though)
            cout << "yes\n";
        }
    }
    
    // Return 0 to indicate successful program termination
    return 0;
}

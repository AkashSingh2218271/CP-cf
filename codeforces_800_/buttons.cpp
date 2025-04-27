// Include necessary header files
#include <iostream> // for input and output operations
#include <vector>   // for using vectors (although vectors are not used here)
using namespace std;

int main() {
    
    int t; // variable to store the number of test cases
    cin >> t; // read the number of test cases

    // Process each test case
    while (t--)
    {
        int a, b, c; // variables to store the number of buttons Anna, Katie, and both can press
        cin >> a >> b >> c; // read the three integers

        // If the number of common buttons 'c' is even
        if (c % 2 == 0) {
            // Compare the number of buttons Anna and Katie can press
            if (a > b) {
                // If Anna has more buttons, she wins
                cout << "First\n";
            } else {
                // Otherwise, Katie wins
                cout << "Second\n";
            }
        } else {
            // If the number of common buttons 'c' is odd
            if (a >= b) {
                // Anna effectively gets one extra turn (because she starts first), so check if Anna can win
                cout << "First\n";
            } else {
                // Otherwise, Katie wins
                cout << "Second\n";
            }
        }
    }
    
    // Return 0 to indicate successful execution
    return 0;
}

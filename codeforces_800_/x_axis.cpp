#include <iostream>
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the three points on the X axis
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        // Calculate the minimum total distance by trying all three points as possible 'a'
        // The optimal point 'a' will be one of the given points (x1, x2, or x3)
        // We calculate the total distance for each point and take the minimum
        int min_val = min(
            // Calculate total distance if we choose x1 as point 'a'
            abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3),
            min(
                // Calculate total distance if we choose x2 as point 'a'
                abs(x2 - x1) + abs(x2 - x2) + abs(x2 - x3),
                // Calculate total distance if we choose x3 as point 'a'
                abs(x3 - x1) + abs(x3 - x2) + abs(x3 - x3)
            )
        );
        
        // Output the minimum total distance for this test case
        cout << min_val << endl;
    }
    
    return 0;
}
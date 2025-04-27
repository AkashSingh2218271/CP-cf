// Include necessary header file
#include <iostream> // for input and output operations
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Loop through each test case
    while (t--)
    {
        // Read the three integers a, b, and c
        int a, b, c;
        cin >> a >> b >> c;

        // Perform up to 5 operations
        for (int i = 0; i < 5; i++) {
            // Find the minimum among a, b, and c
            int m = min(min(a, b), c);

            // Increase the minimum value by 1
            if (a == m) {
                a++;
            } else if (b == m) {
                b++;
            } else {
                c++;
            }
        }

        // Output the maximum product after operations
        cout << a * b * c << endl;
    }
    
    // Return 0 to indicate successful execution
    return 0;
}

#include <iostream>  // Include the standard input/output library
#include <vector>    // Include the vector container library
using namespace std; // Use the standard namespace to avoid writing std:: everywhere

int main() {
    int t;                // Declare a variable to store the number of test cases
    cin >> t;             // Read the number of test cases from input

    // Loop through each test case
    while (t--)
    {
        int n;            // Declare a variable to store the number of elements in the array
        cin >> n;         // Read the value of n

        vector<int> v(n); // Create a vector of size n to store the input numbers

        // Read n integers into the vector
        for (int i = 0; i < n; i++) {
            cin >> v[i];  // Read each element from input
        }

        int count = 1e9;  // Initialize a variable to store the minimum value (start with a large number)

        // Iterate through the vector starting from the second element
        for (int i = 1; i < n; i++)
        {
            // For each pair of adjacent elements, calculate max of the pair minus 1
            // Update count to be the minimum value encountered so far
            count = min(count, max(v[i], v[i - 1]) - 1);
        }

        // Output the result for this test case
        cout << count << endl;
    }

    return 0; // Indicate that the program ended successfully
}

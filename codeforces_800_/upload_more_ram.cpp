#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing with std::

// Function to calculate and print the minimum seconds needed to upload n GB of RAM
void upload() {
    int n, k;
    cin >> n >> k; // Read the amount of RAM to upload (n) and the speed restriction interval (k)

    int ram = 0, s; // Initialize uploaded RAM to 0, and a counter for seconds (s)
    for (s = 0; ram < n; s++) // Loop until we've uploaded all n GBs of RAM
    {
        if (s % k == 0) { // At every k-th second (starting from 0), we can upload 1 GB
            ram++;        // Upload 1 GB of RAM
        }
    }
    cout << s << endl; // Output the total number of seconds it took
}

// Main function to handle multiple test cases
int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) // Loop through each test case
    {
        upload(); // Call the upload function for each test case
    }
    
    return 0; // Indicate that the program ended successfully
}

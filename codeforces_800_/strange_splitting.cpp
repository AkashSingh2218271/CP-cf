#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the number of elements in the array
    int n;
    cin >> n;

    // Initialize a vector to store the elements of the array
    vector<int> a(n);
    
    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if the first and last elements are the same
    // If they are, it means all elements are the same, and we cannot color them differently
    if (a[0] == a[n - 1]) {
        cout << "NO" << endl; // Output "NO" if all elements are the same
        return 0; // Exit the program
    }

    // If we reach here, it means we can color the elements
    cout << "YES" << endl; // Output "YES" indicating a valid coloring is possible

    // Initialize a string to store the colors of the elements
    string colors(n, 'R'); // Start by coloring all elements red

    // Change the color of the last element to blue
    colors[n - 1] = 'B'; // Color the last element blue

    // Output the colors of the elements
    cout << colors << endl; // Print the coloring result

    return 0; // Exit the program successfully
}
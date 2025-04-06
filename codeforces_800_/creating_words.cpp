// Problem: Creating Words - Swap first characters of two 3-letter words
// Input: Number of test cases t, followed by t pairs of 3-letter words
// Output: For each test case, print the two words after swapping their first characters

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read two 3-letter words
        string a, b;
        cin >> a >> b;
        
        // Store first character of first word
        char ch = a[0];
        // Replace first character of first word with first character of second word
        a[0] = b[0];
        // Replace first character of second word with stored character
        b[0] = ch;

        // Output the modified words separated by space
        cout << a << " " << b << endl;
    }
    
    return 0;
}
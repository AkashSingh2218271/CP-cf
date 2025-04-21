#include <iostream>  // For standard input/output
#include <vector>    // To use the vector container
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--)  // Loop over each test case
    {
        int n, max_val = 0;  // n: number of books, max_val: to store the max of first n-1 books
        cin >> n;  // Read the number of books
        vector<int> a(n);  // Create a vector to store number of pages in each book

        // Read the first n-1 books and keep track of the maximum value among them
        for (int i = 0; i < (n - 1); i++) {
            cin >> a[i];  // Read pages in the i-th book
            max_val = max(max_val, a[i]);  // Update the maximum pages among first n-1 books
        }

        cin >> a[n - 1];  // Read the number of pages in the last (n-th) book

        int sum = a[n - 1] + max_val;  // Alice reads the max from each pile: last book + max of previous

        cout << sum << endl;  // Output the total maximum pages Alice can read
    }

    return 0;  // Indicate successful termination
}

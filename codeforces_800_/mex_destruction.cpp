#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve the MEX destruction problem
void mex_operation() { 
    // Read the size of the array
    long long n;
    cin >> n;

    // Create and read the input array
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count the number of zeros in the array
    long long zero = 0;
    for (auto &&i : a) {
        zero += (i == 0);
    } 

    // Special case 1: If all elements are zero, MEX is 0
    if (zero == n) {
        cout << 0 << endl;
        return;
    } 
    // Special case 2: If there are no zeros, MEX is 1
    else if (zero == 0) {
        cout << 1 << endl;
        return;
    }

    // Count consecutive positive numbers between zeros
    long long count = 0;
    vector<int> positive_block;
    for (int i = 0; i < n; i++) {
        // When we encounter a zero, store the count of positive numbers before it
        if (a[i] == 0) {
            if (count > 0) {
                positive_block.push_back(count);
            }
            count = 0;
        } 
        // Increment count for positive numbers
        else {
            count++;
        }
    }
    // Don't forget to add the last block of positive numbers if exists
    if (count > 0) {
        positive_block.push_back(count);
    }

    // If there are multiple blocks of positive numbers, MEX is 2
    if (positive_block.size() > 1) {
        cout << 2 << endl;
        return;
    } 
    // If there is only one block of positive numbers, MEX is 1
    else if (positive_block.size() == 1) {
        cout << 1 << endl;
        return;
    }
}

// Main function to handle multiple test cases
int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        mex_operation();
    }

    return 0;
}


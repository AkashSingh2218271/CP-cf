#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

/*
Problem: Bus Seating Arrangement
Description: Check if passengers followed seating rules in a bus:
1. First passenger can sit anywhere
2. Subsequent passengers must sit next to at least one occupied seat
Input: 
- t test cases
- For each test case:
  - n: number of seats/passengers
  - a: array of n integers representing seat numbers taken by passengers in order
Output: "yes" if rules followed, "no" otherwise
*/

void seating() {
    int n;
    cin >> n;  // Read number of seats/passengers
    
    vector<int> a(n, 0);  // Create array to store seat numbers
    set<int> s;  // Set to track occupied seats
    
    // Read seat numbers for each passenger
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // First passenger can sit anywhere
    s.insert(a[0]);
    
    // Check seating rules for remaining passengers
    for (int i = 1; i < n; i++) {
        // Check if current seat has at least one occupied neighbor
        if (s.find(a[i] + 1) != s.end() || s.find(a[i] - 1) != s.end()) {
            s.insert(a[i]);  // Valid seat, mark as occupied
        } else {
            cout << "no\n";  // Invalid seating, rules not followed
            return;
        }
    }
    
    cout << "yes\n";  // All passengers followed the rules
}

int main() {
    int t;
    cin >> t;  // Read number of test cases

    // Process each test case
    while (t--) {
        seating();
    }
    
    return 0;
}
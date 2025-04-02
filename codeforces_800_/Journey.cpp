// Problem: Journey - Calculate total days needed to complete a journey
// Input: Number of test cases t, followed by t cases containing:
//        n (total distance), a, b, c (distances covered in each day)
// Output: For each test case, print total number of days needed

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read total distance and daily distances
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        // Calculate sum of distances covered in one cycle (3 days)
        int sum = a + b + c;
        int total_days = 3;  // Each cycle takes 3 days
        // Calculate remaining distance after complete cycles
        int rem = n % sum;
        // Calculate number of complete cycles
        int days = n / sum;
        // Add days from complete cycles
        total_days *= days;
        
        // Process remaining distance
        while (rem != 0)
        {
            // Day 1: Cover distance a
            rem -= a;
            total_days++;
            if (rem <= 0) { break; }
            
            // Day 2: Cover distance b
            rem -= b;
            total_days++;
            if (rem <= 0) { break; }
            
            // Day 3: Cover distance c
            rem -= c;
            total_days++;
            if (rem <= 0) { break; }
        }
        
        // Output total days needed
        cout << total_days << endl;
    }
    
    return 0;
}
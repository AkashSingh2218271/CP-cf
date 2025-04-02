// Problem: Fibonacciness - Find maximum number of Fibonacci-like sequences in given numbers
// Input: Number of test cases t, followed by t cases containing 4 numbers
// Output: For each test case, print maximum number of Fibonacci-like sequences possible

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Create vector to store numbers
        vector<int> fib(4);
        // Counters for two possible Fibonacci sequences
        int f1 = 0, f2 = 0; 

        // Read 4 numbers
        for (int i = 0; i < 4; i++) {
                cin >> fib[i];
        }
        // Insert sum of first two numbers at position 2
        fib.insert(fib.begin() + 2, fib[0] + fib[1]);

        // Check first possible Fibonacci sequence
        for (int i = 0; i < 3; i++) {
            if (fib[i] + fib[i + 1] == fib[i + 2]) {
                f1++;
            }
        }
        
        // Modify third number for second possible sequence
        fib[2] = fib[4] - fib[3];
        // Check second possible Fibonacci sequence
        for (int i = 0; i < 3; i++) {
            if (fib[i] + fib[i + 1] == fib[i + 2]) {
                f2++;
            }
        }
        
        // Output maximum number of Fibonacci-like sequences
        cout << max(f1, f2) << endl;
    }
    
    return 0;
}
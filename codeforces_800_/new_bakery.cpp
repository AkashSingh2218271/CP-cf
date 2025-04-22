#include <iostream> // Includes input/output stream library
using namespace std;

// Function to calculate and print the maximum profit for one test case
void max_profit() {
    
    long long n, a, b;
    cin >> n >> a >> b; // Reads number of buns, regular price (a), and max promotional price (b)

    long long k = 0; // Placeholder for the number of buns sold at discounted price (not used in logic here)
    long long sum = 0; // To store total profit

    // Case 1: If promotional price is less than or equal to regular price, sell all at regular price
    if (b <= a) {
        cout << n * a << endl; // Total profit is n * a
    }
    // Case 2: If the difference between b and a is greater than or equal to n-1
    // Then we can apply promotional pricing to all buns
    else if (b - a >= n - 1) {
        // Sum of first n promotional prices: b + (b-1) + ... + (b-n+1)
        sum = b * (b + 1) / 2 - (b - n) * (b - n + 1) / 2;
        cout << sum << endl;
    }
    // Case 3: Apply promotion to part of the buns, rest sold at regular price
    else {
        // Sum of promotional prices from a+1 to b (i.e., b-(b-1)-...-(a+1))
        sum = b * (b + 1) / 2 - a * (a + 1) / 2;
        n -= b - a; // Remaining buns to be sold at price a
        sum += a * n; // Add profit from regular price buns
        cout << sum << endl;
    }
}

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        max_profit(); // Solve each test case
    }

    return 0; // Exit program
}

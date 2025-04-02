// Problem: Farmer John needs to find minimum number of animals (chickens and cows) given total legs
// Input: Number of test cases t, followed by t numbers n representing total legs
// Output: For each test case, print minimum number of animals possible

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read total number of legs for current test case
        int n;
        cin >> n;
        
        // If legs > 2, we can have both chickens and cows
        if (n > 2) {
            // First try to use as many cows as possible (4 legs each)
            // This gives us minimum number of animals
            int ans = n / 4;
            // Calculate remaining legs after using cows
            n = n % 4;
            // Use chickens (2 legs each) for remaining legs
            ans += n / 2;
            cout << ans << endl;
        } else {
            // If legs <= 2, we can only have chickens
            int ans = n / 2;
            cout << ans << endl;
        }
    }

    return 0;
}

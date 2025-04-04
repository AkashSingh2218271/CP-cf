// Problem: Soccer - Check if teams could have never had equal scores between two given scores
// Input: Number of test cases t, followed by t test cases
//        Each test case has four numbers x1 y1 x2 y2 representing scores before and after
// Output: For each test case, print "yes" if teams never had equal scores, else "no"
// Note: It's guaranteed that at both time points, scores were not equal

#include <iostream>
using namespace std;

int main() {
    // Read number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read scores before (x1,y1) and after (x2,y2) distraction
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Check if the relative positions of scores remained same
        // If first team was leading before and after (x1<y1 == x2<y2),
        // or trailing before and after, then they never had equal scores
        if ((x1 < y1) == (x2 < y2)) {
            cout << "yes\n";  // Teams never had equal scores
        } else {
            cout << "no\n";   // Teams must have had equal scores at some point
        }
    }
    
    return 0;
}
// Include necessary header files
#include <iostream> // for input and output
#include <map>      // for using map to count characters
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the value of n
        int n;
        cin >> n;
        
        // Read Tim's answer sheet
        string s;
        cin >> s;

        // Create a map to count the frequency of each character (A, B, C, D, ?)
        map<char, int> mp;
        
        // Loop over each character in the string and count
        for (auto it : s) 
            mp[it]++;

        // Initialize the answer (maximum correct answers) to 0
        int ans = 0;
        
        // For each option (A, B, C, D), add the minimum of (n, number of times Tim wrote it)
        // Because even if Tim wrote more than n of a letter, only n can be correct
        ans += min(n, mp['A']);
        ans += min(n, mp['B']);
        ans += min(n, mp['C']);
        ans += min(n, mp['D']);
        
        // Output the final answer for this test case
        cout << ans << endl;
    }
    
    // Return 0 to indicate the program ended successfully
    return 0;
}

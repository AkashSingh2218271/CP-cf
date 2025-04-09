#include <iostream>
using namespace std;

int main() {
    // Read the dimensions of the table (n rows, m columns)
    int n, m;
    cin >> n >> m;
    
    // Create three different row patterns:
    // s1: Full row of '#' (used for even rows)
    // s2: '#' at the end (used for odd rows when going right)
    // s3: '#' at the beginning (used for odd rows when going left)
    string s1, s2, s3;
    for (int i = 1; i <= m; i++)
    {
        s1 += "#";  // Build full row of '#'
        if (i == m) { s2 += "#"; } else { s2 += "."; }  // Build pattern with '#' at end
        if (i == 1) { s3 += "#"; } else { s3 += "."; }  // Build pattern with '#' at start
    }
        
    // Print the snake pattern row by row
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            // For even rows (0, 2, 4...), print full row of '#'
            cout << s1 << endl; 
        } else {
            // For odd rows, alternate between patterns with '#' at end and start
            if ((i / 2) % 2 == 0) { cout << s2 << endl; } else { cout << s3 << endl; }
        }
    }
    
    return 0;
}
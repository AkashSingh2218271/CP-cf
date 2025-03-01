#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Using bitset to read binary numbers
    string input1, input2;
    cin >> input1 >> input2;

    // Determine the size of the input (bit length)
    int inputSize = input1.size(); // or use input2.size() since both should be the same length

    // Convert binary strings to bitsets of size 32 (maximum size here is 32, change as per input needs)
    bitset<32> a(input1), b(input2);

    // XOR the two bitsets
    int ans = (a.to_ulong()) ^ (b.to_ulong());

    // Convert the result to a bitset of the same size as input1
    bitset<32> result(ans);

    // Print the result as a bitset, but only display the relevant number of bits (equal to inputSize)
    cout << result.to_string().substr(32 - inputSize) << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    w = max(y, w);
    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout <<  probability[w] << endl;

    return 0;
}
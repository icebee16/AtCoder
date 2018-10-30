#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a;
    cin >> b;
    if (a % b == 0) cout << 0 << endl;
    else cout << b - a % b << endl;
}

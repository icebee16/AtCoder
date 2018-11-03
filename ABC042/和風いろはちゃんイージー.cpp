#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if ((A != 1) & (B != 1) & (C != 1) & (A * B * C == 5 * 7 * 5)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

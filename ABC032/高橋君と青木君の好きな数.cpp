#include <iostream>
using namespace std;
int main() {
    int a, b, n;
    cin >> a;
    cin >> b;
    cin >> n;
    int res;
    res = (((n - 1) / a) + 1) * a;
    for (int i = 0; i < b; i++) {
        if ((res + i * a) % b == 0) {
            cout << res + i * a << endl;
            break;
        }
    }
}

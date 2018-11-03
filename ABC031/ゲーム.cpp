#include <iostream>
using namespace std;
int main() {
    int A, D;
    cin >> A >> D;
    int res = (A + 1) * D;
    if (A * (D + 1) > res) res = A * (D + 1);
    cout << res << endl;
}

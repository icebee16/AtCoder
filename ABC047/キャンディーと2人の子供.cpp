#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) == 2 * max({a, b, c})) cout << "Yes" << endl;
    else cout << "No" << endl;
}

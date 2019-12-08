#include <bits/stdc++.h>
using namespace std;

const long double PI = (acos(-1));

int main() {
    long double a, b, x;
    cin >> a >> b >> x;

    long double ans;
    if (a * a * b / 2.0 <= x) {
        ans = atan(2.0 * (a * a * b - x) / (a * a * a)) * 180 / PI;
    } else {
        ans = atan((a * b * b) / (2.0 * x)) * 180 / PI;
    }
    cout << fixed << setprecision(10) << ans << endl;
}

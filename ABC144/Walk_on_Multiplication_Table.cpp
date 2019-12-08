#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll result = N - 1;

    ll quotient, remain;
    for (ll i = 2; i * i <= N; i++) {
        quotient = N / i;
       remain = N % i;
        if (remain == 0 && (i + quotient - 2) < result) {
            result = i + quotient - 2;
        }
    }

    if (N == 1) {
        result = N - 2;
    }
    cout << result << endl;
}

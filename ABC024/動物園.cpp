#include <iostream>
using namespace std;
int main() {
    int A, B, C, K;
    int S, T;
    cin >> A >> B >> C >> K;
    cin >> S >> T;
    int total, discout;
    total = A * S + B * T;
    if ((S + T) >= K) discout = (S + T) * C;
    else discout = 0;
    cout << total - discout << endl;
}

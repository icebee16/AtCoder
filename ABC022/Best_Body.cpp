#include <iostream>
using namespace std;
int main() {
    int N, S, T;
    cin >> N >> S >> T;
    int W, A;
    cin >> W;
    int res = 0;
    if ((W >= S) & (W <= T)) res++;
    for (int i = 2; i <= N; i++) {
        cin >> A;
        W += A;
        if ((W >= S) & (W <= T)) res++;
    }
    cout << res << endl;
}

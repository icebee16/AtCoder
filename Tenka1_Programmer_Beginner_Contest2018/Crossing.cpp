// 20181028
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    int can = 0;
    for (int i = 2; i < 400; i++) {
        if (N == i * (i + 1)) {
            can = i;
            break;
        }
    }

    if (can == 0) {
        cout << "No" << endl;
    } else {
        for (int i = 0; i < N; i++) {
            int j;
            for (j = 0; j < i; j++) {
            }
            for (; j < N; j ) {
            }
        }
    }
}

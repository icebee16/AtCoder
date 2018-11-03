#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int d = N % 10;
    if (d == 0) {
        if (N == 0) {
            cout << "SAME" << endl;
        } else {
            cout << "DIFFERENT" << endl;
        }
    } else {
        if ((N / d) == 1111) {
            cout << "SAME" << endl;
        } else {
            cout << "DIFFERENT" << endl;
        }
    }
}

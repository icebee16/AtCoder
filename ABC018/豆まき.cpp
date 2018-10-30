#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    if (A > B && A > C) {
        cout << 1 << endl;
        if (B > C) {
            cout << 2 << endl;
            cout << 3 << endl;
        } else {
            cout << 3 << endl;
            cout << 2 << endl;
        }
    } else if (B > A && B > C) {
        if (A > C) {
            cout << 2 << endl;
            cout << 1 << endl;
            cout << 3 << endl;
        } else {
            cout << 3 << endl;
            cout << 1 << endl;
            cout << 2 << endl;
        }
    } else if (C > A && C > B) {
        if (A > B) {
            cout << 2 << endl;
            cout << 3 << endl;
        } else {
            cout << 3 << endl;
            cout << 2 << endl;
        }
        cout << 1 << endl;
    }
}

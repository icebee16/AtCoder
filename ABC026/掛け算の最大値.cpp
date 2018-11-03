#include <iostream>
using namespace std;
int main() {
    int A;
    cin >> A;
    int max = 0;
    for (int i = 1; i < A; i++){
        if (i * (A - i) > max) max = i * (A - i);
    }
    cout << max << endl;
}

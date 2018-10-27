#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int Ex = 0;
    for (int i = 0; i < N; i++) {
        Ex += 10000 * (i + 1);
    }
    cout << Ex / N << endl;
}

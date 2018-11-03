#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    int N;
    cin >> S;
    cin >> N;
    cout << S[(N - 1) / 5] << S[(N - 1) % 5] << endl;
}

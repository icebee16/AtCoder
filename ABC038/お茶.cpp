#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    if (S[0] == 'T') cout << "YES" << endl;
    else cout << "NO" << endl;
}

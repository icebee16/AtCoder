#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < 19; i++){
        if ((i == 5)||(i == 13)){
            s[i] = ' ';
        }
    }
    cout << s << endl;
}

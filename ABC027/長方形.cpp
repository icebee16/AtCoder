#include <iostream>
using namespace std;
int main(){
    int L[3];
    cin >> L[0] >> L[1] >> L[2];
    if (L[0] == L[1]) {
        cout << L[2] << endl;
    } else if (L[0] == L[2]){
        cout << L[1] << endl;
    } else {
        cout << L[0] << endl;
    }
}

#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string result = "No";

    int quotient, remain;
    for (int i = 1; i < 10; i++) {
        quotient = N / i;
        remain = N % i;
        if (remain == 0 && quotient < 10) {
            result = "Yes";
        }
    }

    cout << result << endl;
}

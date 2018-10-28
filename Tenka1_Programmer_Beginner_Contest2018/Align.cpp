#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N;
    int A[1000000];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A, A + N);

    int total = 0;
    int lid = 0, rid = 0;
    int Max = N - 1, min = 1;
    int RM, LM, Rm, Lm;
    for (int i = 0; i < N - 1; i++) {
        LM = abs(A[lid] - A[Max]);
        RM = abs(A[rid] - A[Max]);
        Lm = abs(A[lid] - A[min]);
        Rm = abs(A[rid] - A[min]);

        if (max({LM, RM, Lm, Rm}) == LM) {
            total += LM;
            lid = Max;
            Max--;
        } else if (max({LM, RM, Lm, Rm}) == RM) {
            total += RM;
            rid = Max;
            Max--;
        } else if (max({LM, RM, Lm, Rm}) == Lm) {
            total += Lm;
            lid = min;
            min++;
        } else if (max({LM, RM, Lm, Rm}) == Rm) {
            total += Rm;
            rid = min;
            min++;
        }
    }

    cout << total << endl;
}

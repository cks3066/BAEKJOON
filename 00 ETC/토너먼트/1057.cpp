#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,A,B;
    int round = 0;

    cin >> N >> A >> B;

    while (true) {
        N++, A++, B++, round++;
        
        if (A / 2 == B / 2) {
            cout << round;
            break;
        }

        N /= 2, A /= 2, B /= 2;
    }

    return 0;
}

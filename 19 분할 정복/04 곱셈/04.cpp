#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int pow(int a, int b, int c) {
    if (b == 0) return 1;
    else if (b == 1) return a % c;

    long long tmp = pow(a, b / 2, c);
    if (b % 2 != 0) {
        return ((tmp * tmp) % c * a) % c;
    }
    else {
        return (tmp * tmp) % c;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    cin >> A >> B >> C;

    cout << pow(A, B, C);

    return 0;
}

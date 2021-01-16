#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);

    int N,K;

    cin >> N >> K;

    int A = 1, B = 1;

    if (K == 0) {
        cout << 1;
        return 0;
    }
    for (int i = K; i >= 1; i--) {
        A *= N--;
        B *= i;
    }

    cout << A/B;

    return 0;
}

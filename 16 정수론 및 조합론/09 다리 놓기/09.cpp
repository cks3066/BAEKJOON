#define _CRT_SECURE_NO_WARNINGS
#
#include<iostream>

using namespace std;

int T, N, M;
int memo[31][31];

int Memoization(int M) {
    if (M == 1) {
        return memo[N][M] = N;
    }
    return memo[N][M] = Memoization(M - 1) * (N - M + 1) / M;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin >> T;

    for (int s = 1; s <= T; s++) {
        cin >> M >> N;

        cout << Memoization(M) << endl;;
    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include<iostream>

using namespace std;

int N, K;
long long int memo[MAX][MAX];

unsigned long long int Memoization(int M) {
    if (M == 1) {
        return memo[N][M] = N;
    }
    return memo[N][M] = Memoization(M-1) * (N - M + 1 / M);
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin >> N >> K;

    int A = 1, B = 1;

    if (K == 0) {
        cout << 1;
        return 0;
    }

    if (N == K) {
        cout << 1;
        return 0;
    }

    cout << Memoization(K) % 10007;

    return 0;
}

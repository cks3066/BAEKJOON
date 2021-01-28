#define _CRT_SECURE_NO_WARNINGS
#define MAX 20

#include <iostream>

using namespace std;

int memo[MAX];

int memoization(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 2;
    else if (n == 3) return 4;
    if (memo[n] == 0) {
        for (int i = 1; i <= 3; i++) {
            memo[n] += memoization(n - i);
        }
    }
    return memo[n];
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << memoization(n) << '\n';
    }

    return 0;
}

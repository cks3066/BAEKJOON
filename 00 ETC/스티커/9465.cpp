#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int T;
int memo[100000 + 1][2] = { 0, };

void DP(int n,int arr[][2]) {
    
    if (n > 2 && memo[n][0] == 0) {
        if (memo[n - 1][0] == 0) DP(n - 1, arr);
        memo[n][0] = memo[n - 1][1] + arr[n][0];
        memo[n][1] = memo[n - 1][0] + arr[n][1];

        if (max(memo[n - 2][0], memo[n - 2][1]) + arr[n][0] > memo[n][0])
            memo[n][0] = max(memo[n - 2][0], memo[n - 2][1]) + arr[n][0];
        if (max(memo[n - 2][0], memo[n - 2][1]) + arr[n][1] > memo[n][1])
            memo[n][1] = max(memo[n - 2][0], memo[n - 2][1]) + arr[n][1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    for (int i = 0; i < T; i++) {
        int arr[100000 + 1][2];
        int n;
        cin >> n;
        for (int j = 0; j < 2; j++) {
            for (int k = 1; k <= n; k++) {
                cin >> arr[k][j];
            }
        }

        for (int j = 1; j <= n; j++) {
            memo[j][0] = 0;
            memo[j][1] = 0;
        }
        memo[1][0] = arr[1][0];
        memo[1][1] = arr[1][1];
        memo[2][0] = memo[1][1] + arr[2][0];
        memo[2][1] = memo[1][0] + arr[2][1];

        DP(n, arr);

        cout << max(memo[n][0], memo[n][1]) << '\n';
    }

    return 0;
}

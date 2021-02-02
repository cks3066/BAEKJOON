#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int N;
int memo[1000 + 1];
int arr[1000 + 1];

void DP(int n) {
    if (n == N) {
        memo[n] = arr[n];
    }
    else {
        int gt = 0;
        for (int i = n + 1; i <= N; i++) {
            if (arr[i] > arr[n] && memo[i] > gt) {
                gt = memo[i];
            }
        }
        memo[n] = gt + arr[n];
    }
    if (n == 1) return;
    DP(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    DP(N);

    int gt = 0;
    for (int i = 1; i <= N; i++) {
        if (memo[i] > gt) gt = memo[i];
    }

    cout << gt;

    return 0;
}

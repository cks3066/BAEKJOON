#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000+1

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int n, k;
int bag[MAX];
int w[101];
int v[101];

void Memoization() {
    for (int i = 1; i <= n; i++) {
        for (int j = k; j >= 1; j--) {
            if (w[i] <= j) {
                bag[j] = max(bag[j], bag[j - w[i]] + v[i]);
            }
        }
    }
    cout << bag[k] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    Memoization();

    return 0;
}

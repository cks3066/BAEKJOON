#define _CRT_SECURE_NO_WARNINGS
#define MAX 10+1

#include <iostream>

using namespace std;

int coinValue[MAX];

int main() {
	ios::sync_with_stdio(false);

	int N,K;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> coinValue[i];
	}

	int cnt = 0;

	for (int i = N; i >= 1; i--) {
		if (coinValue[i] <= K) {
			while (K >= coinValue[i]) {
				K -= coinValue[i];
				cnt++;
			}
		}
		if (K == 0)
			break;
	}

	cout << cnt;
	return 0;
}

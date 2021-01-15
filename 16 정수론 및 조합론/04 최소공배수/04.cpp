#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int T,N,M;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		int gt;

		if (N > M) gt = N;
		else if (N < M) gt = M;
		else {
			cout << N << "\n";
			continue;
		}

		int yak = 1;
		for (int i = 2; i <= gt; i++) {
			if (N % i == 0 && M % i == 0) {
				N /= i, M /= i;
				yak *= i;
				i = 1;
			}
			if (i == gt) break;
		}
		cout << yak * N * M << "\n";
	}

	return 0;
}

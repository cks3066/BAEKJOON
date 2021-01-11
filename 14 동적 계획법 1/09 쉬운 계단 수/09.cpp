#define _CRT_SECURE_NO_WARNINGS
#define MAX 100+1

#include <iostream>

using namespace std;

long long int memo[MAX][10];
bool filled[MAX];

void StairNumber(int N) {
	if (N == 1) {
		for (int i = 0; i < 10; i++) {
			memo[N][i] = 1;
		}
		memo[N][0] = 0;
		filled[N] = true;
		return;
	}
	if (filled[N - 1] == false) {
		StairNumber(N - 1);
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			memo[N][i] = memo[N - 1][i + 1] % 1000000000;
		}
		else if (i == 9) {
			memo[N][i] = memo[N - 1][i - 1] % 1000000000;
		}
		else {
			memo[N][i] = (memo[N - 1][i - 1] + memo[N - 1][i + 1]) % 1000000000;
		}
	}
	filled[N] = true;

	return;
}

int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	StairNumber(N);

	long long int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += memo[N][i];
	}

	sum % 1000000000;

	cout << sum % 1000000000;

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000+1

#include <iostream>

using namespace std;

int amountWine[MAX];
int memo[MAX][2];
bool filled[MAX];

void Memoization(int n) {
	if (n == 1) {
		memo[n][0] = amountWine[n];
		memo[n][1] = amountWine[n];
		filled[n] = true;
		return;
	}
	if (n == 2) {
		memo[1][0] = amountWine[1];
		memo[1][1] = amountWine[1];
		filled[1] = true;
		memo[n][0] = amountWine[n];
		memo[n][1] = memo[n - 1][0] + amountWine[n];
		filled[n] = true;
		return;
	}
	if (filled[n - 1] == false) {
		Memoization(n - 1);
	}
	int gt = memo[1][0];
	for (int i = 1; i <= n - 2; i++) {
		for (int j = 0; j <= 1; j++) {
			if (memo[i][j] > gt) {
				gt = memo[i][j];
			}
		}
	}
	memo[n][0] = gt + amountWine[n];
	memo[n][1] = memo[n - 1][0] + amountWine[n];
	filled[n] = true;

	return;
}
int main() {
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> amountWine[i];
	}

	Memoization(n);

	int gt;

	if (n == 1) cout << memo[n][0];
	else {
		gt = memo[n][1];
		if (memo[n - 1][0] > gt) gt = memo[n - 1][0];
		if (memo[n - 1][1] > gt) gt = memo[n - 1][1];
		if (memo[n][0] > gt) gt = memo[n][0];

		cout << gt << endl;
	}

	return 0;
}

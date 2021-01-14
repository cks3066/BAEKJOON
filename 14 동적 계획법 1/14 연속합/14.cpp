#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000+1

#include <iostream>

using namespace std;

int memo[MAX];
int seq[MAX];

int main() {
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> seq[i];
	}

	int gt = -1000;
	int i = n;

	for (int j = i; j >= 1; j--) {
		if (j == i) {
			memo[j] = seq[j];
			if (memo[j] > gt)
			gt = seq[j];
		}
		else {
			if (memo[j + 1] < 0) {
				memo[j] = seq[j];
				if (memo[j] > gt)
				gt = seq[j];
			}
			else
			memo[j] = seq[j] + memo[j+1];
			if (memo[j] > gt) {
				gt = memo[j];
			}
		}
	}

	cout << gt;

	return 0;
}

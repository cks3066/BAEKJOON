#define _CRT_SECURE_NO_WARNINGS
#define MAX 100+1
#include <iostream>

using namespace std;

long long int memo[MAX];
bool filled[MAX];

long long int P(int N) {
	if (filled[N] == false) {
		memo[N] = P(N - 1) + P(N - 5);
		filled[N] = true;
	}
	return memo[N];
}

int main() {
	ios::sync_with_stdio(false);

	int T,N;

	cin >> T;

	memo[1] = 1;
	filled[1] = true;
	memo[2] = 1;
	filled[2] = true;
	memo[3] = 1;
	filled[3] = true;
	memo[4] = 2;
	filled[4] = true;
	memo[5] = 2;
	filled[5] = true;

	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << P(N) << endl;
	}

	return 0;
}

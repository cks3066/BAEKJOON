#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000+1
#include <iostream>

using namespace std;

int memo[MAX];
bool filled[MAX];

int AbleTile(int N) {
	if (N <= 2) return N;
	if (filled[N] == true)
		return memo[N] % 15746;

	memo[N] = (AbleTile(N - 1) + AbleTile(N - 2)) % 15746;
	filled[N] = true;
	return memo[N];
}

int main() {
	ios::sync_with_stdio(false);

	int N;

	for (int i = 0; i < 3; i++) {
		memo[i] = i;
		filled[i] = true;
	}

	cin >> N;

	cout << AbleTile(N);
 
	return 0;
}

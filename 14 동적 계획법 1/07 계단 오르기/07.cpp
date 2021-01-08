#define _CRT_SECURE_NO_WARNINGS
#define MAX 300+1
#include <iostream>

using namespace std;

int scores[MAX];
int memo[MAX][2];
int cntSteps[MAX][2] = { 0, };
bool filled[MAX];

void GoUpStairs(int N) {

	if (N == 2) {
		memo[1][0] = scores[1];
		memo[1][1] = scores[1];
		cntSteps[1][0] = 1;
		cntSteps[1][1] = 1;
		filled[1] = true;

		memo[N][0] = scores[1] + scores[2];
		memo[N][1] = scores[2];
		cntSteps[N][0] = 2;
		cntSteps[N][1] = 1;
		filled[N] = true;
		return;
	}
	if (filled[N-1] == false) {
		GoUpStairs(N - 1);
	}

	memo[N][0] = memo[N-1][1] + scores[N];
	memo[N][1] = memo[N-2][0] > memo[N-2][1]? memo[N-2][0] + scores[N] : memo[N-2][1] + scores[N];
	cntSteps[N][0] = 2;
	cntSteps[N][1] = 1;
	filled[N] = true;

	return;
}

int main() {
	ios::sync_with_stdio(false);

	int N;
	int max;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> scores[i];
	}

	GoUpStairs(N);

	max = memo[N][0];
	if (memo[N][1] > max) max = memo[N][1];
	cout << max;


	return 0;
}

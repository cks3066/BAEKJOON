#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1
#include <iostream>

using namespace std;

int memo[MAX][3];
int costRGB[MAX][3];
bool filled[MAX];

void RGB(int N) {
	if (N == 1) {
		for (int i = 0; i < 3; i++)
			memo[N][i] = costRGB[N][i];
		filled[N] = true;
		return;
	}
	if (filled[N - 1] == false)
		RGB(N - 1);
	memo[N][0] = (memo[N - 1][1] <= memo[N - 1][2] ? memo[N - 1][1] + costRGB[N][0] : memo[N - 1][2] + costRGB[N][0]);
	memo[N][1] = (memo[N - 1][0] <= memo[N - 1][2] ? memo[N - 1][0] + costRGB[N][1] : memo[N - 1][2] + costRGB[N][1]);
	memo[N][2] = (memo[N - 1][0] <= memo[N - 1][1] ? memo[N - 1][0] + costRGB[N][2] : memo[N - 1][1] + costRGB[N][2]);
	filled[N] = true;
	return;
}
int main() {
	ios::sync_with_stdio(false);

	int N, minimum;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> costRGB[i][0] >> costRGB[i][1] >> costRGB[i][2];
	}
	
	RGB(N);

	minimum = memo[N][0];
	for (int i = 0; i < 3; i++) {
		if (memo[N][i] < minimum) minimum = memo[N][i];
	}

	cout << minimum;

	return 0;
}

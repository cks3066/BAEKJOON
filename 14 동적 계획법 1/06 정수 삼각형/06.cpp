#define _CRT_SECURE_NO_WARNINGS
#define MAX 500+1+1
#include <iostream>

using namespace std;

int triangle[MAX][MAX];
int memo[MAX][MAX];
bool filled[MAX];

void MaxTriangle(int N) {
	if(N==1) { 
		memo[1][1] = triangle[1][1];
		filled[N] = true;
		return;
	}
	if (filled[N - 1] == false) {
		MaxTriangle(N - 1);
	}
	for (int n = 1; n <= N; n++) {
		memo[N][n] = memo[N - 1][n - 1] > memo[N - 1][n] ? triangle[N][n] + memo[N - 1][n - 1] : triangle[N][n] + memo[N - 1][n];
	}
	filled[N] = true;
	return;

}
int main() {
	ios::sync_with_stdio(false);

	int N,max;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}

	MaxTriangle(N);

	max = memo[N][0];
	for (int i = 1; i <= N; i++) {
		if (memo[N][i] > max) max = memo[N][i];
	}

	cout << max;

	return 0;
}

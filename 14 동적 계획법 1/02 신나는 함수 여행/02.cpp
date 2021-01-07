#define _CRT_SECURE_NO_WARNINGS
#define MAX 20+1
#include <iostream>

using namespace std;

int memo[MAX][MAX][MAX];
bool filled[MAX][MAX][MAX];

void w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		a = 0, b = 0, c = 0;
		return;
	}

	if (a > 20 || b > 20 || c > 20) {
		a = 20, b = 20, c = 20;
	}

	if (filled[a][b][c] == false) {
		w(a, b, c - 1);
		w(a, b - 1, c - 1);
		w(a, b - 1, c);
		w(a - 1, b, c);
		w(a - 1, b - 1, c);
		w(a - 1, b, c);
		w(a - 1, b - 1, c - 1);
	}

	if (a < b && b < c) {
		memo[a][b][c] = memo[a][b][c-1] + memo[a][b - 1][c-1] - memo[a][b - 1][c];
		filled[a][b][c] = true;
		return;
	}
	memo[a][b][c] = memo[a - 1][b][c] + memo[a - 1][b - 1][c] + memo[a - 1][b][c - 1] - memo[a - 1][b - 1][c - 1];
	filled[a][b][c] = true;
	return;
}

int main() {
	ios::sync_with_stdio(false);

	int a,b,c;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			for (int k = 0; k < MAX; k++) {
				if (i == 0 || j == 0 || k == 0) {
					memo[i][j][k] = 1;
					filled[i][j][k] = true;
				}
			}
		}
	}

	while (true) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w(" << a << ", " << b << ", " << c << ") = ";

		if (a <= 0 || b <= 0 || c <= 0) {
			a = 0, b = 0, c = 0;
		}

		if (a > 20 || b > 20 || c > 20) {
			a = 20, b = 20, c = 20;
		}
		w(a,b,c);

		cout << memo[a][b][c] << endl;
	}
	
	return 0;
}

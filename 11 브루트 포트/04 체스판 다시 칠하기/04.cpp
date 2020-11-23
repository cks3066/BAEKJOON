#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int N, M;
	int testDiff[100] = { 0, };
	int num = 0;
	int minimum = 64;

	cin >> N >> M;

	char **chess = new char*[N];
	for (int i = 0; i < N; i++)
		chess[i] = new char[M];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}

	for (int row = 0; row <= N - 8; row++) {
		for (int col = 0; col <= M - 8; col++) {
			int wDiff = 0, bDiff = 0, diff = 0;

			for (int i = row; i < row + 8; i += 2) {
				for (int j = col; j < col + 8; j += 2) {
					//[0][0]이 W인 경우
					if (chess[i][j] != 'W')
						wDiff++;
					if (chess[i + 1][j + 1] != 'W')
						wDiff++;
					if (chess[i][j + 1] != 'B')
						wDiff++;
					if (chess[i + 1][j] != 'B')
						wDiff++;
					//[0][0]이 B인 경우
					if (chess[i][j] != 'B')
						bDiff++;
					if (chess[i + 1][j + 1] != 'B')
						bDiff++;
					if (chess[i][j + 1] != 'W')
						bDiff++;
					if (chess[i + 1][j] != 'W')
						bDiff++;
				}
			}
			if (wDiff > bDiff) { diff = bDiff; }
			else { diff = wDiff; }

			if (minimum > diff) {
				minimum = diff;
			}
		}
	}

	cout << minimum;

	for (int i = 0; i < N; i++)
		delete[] chess[i]; 
	delete[] chess;

	return 0;
}

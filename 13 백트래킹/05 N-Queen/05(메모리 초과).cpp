#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int ableNum = 0;

//지금 내 영역에서 겹치지 않는 곳찾음
//numTofind가 1인 경우 찾으면 count
void NumAbleSpot(int N,int x, int y,int numTofind, bool **chess) {
	bool** unableSpot = new bool* [N];
	for (int i = 0; i < N; i++)
		unableSpot[i] = new bool[N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			unableSpot[i][j] = chess[i][j];
		}
	}

	if (numTofind == 1) {
		ableNum++;
		return;
	}

	// 해당 좌표에서 불가능한 곳 unbale 표시
	for (int i = 0; i < N; i++) {
		unableSpot[i][y] = true;
		unableSpot[x][i] = true;
		if(x + i < N && y + i < N)
			unableSpot[x + i][y + i] = true;
		if(x + i < N && y - i >= 0)
			unableSpot[x + i][y - i] = true;
		if (x - i >= 0 && y - i >= 0)
			unableSpot[x - i][y - i] = true;
		if (x - i >= 0 && y + i < N)
			unableSpot[x - i][y + i] = true;
	}


	for (int i = x; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (unableSpot[i][j] == false) {
				NumAbleSpot(N, i, j, numTofind - 1, unableSpot);
			}
		}
	}


	return;
}

int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	bool** chess = new bool* [N];
	for (int i = 0; i < N; i++)
		chess[i] = new bool[N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			chess[i][j] = false;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			NumAbleSpot(N, i, j, N, chess);
		}
	}

	cout << ableNum;

	return 0;
}

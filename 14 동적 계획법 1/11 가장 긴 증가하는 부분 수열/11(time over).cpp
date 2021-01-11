#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>

using namespace std;

int N;
int A[MAX];
int numBigr[MAX];
bool indexBig[MAX][MAX];
int cnt = 0;

void LengthSequence(int index) {

	cnt++;

	if (index == N) {
		cout << cnt;
		return;
	}
	int nextIndex;
	int gtNum = 0;
	for (int i = index; i <= N; i++) {
		if (indexBig[index][i] == true) {
			if (numBigr[i] >= gtNum) {
				gtNum = A[i];
				nextIndex = i;
			}
		}
	}

	LengthSequence(nextIndex);
	return;
}

int main() {
	ios::sync_with_stdio(false);

	cin >> N;


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	if (N == 1) {
		cout << 1;
		return 0;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j++) {
			if (A[i] < A[j]) {
				numBigr[i]++;
				indexBig[i][j] = true;
			}
		}
	}

	int startIndex;
	int gtNum = 0;
	for (int i = 1; i <= N; i++) {
		if (numBigr[i] > gtNum) {
			gtNum = numBigr[i];
			startIndex = i;
		}
	}

	LengthSequence(startIndex);

	return 0;
}

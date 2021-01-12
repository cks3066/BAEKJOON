#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1+1

#include <iostream>

using namespace std;

int N;
int A[MAX];
int length[MAX];
int memoLeft[MAX];
int memoRight[MAX];

void MemoizationLeft(int index) {
	if (index == 1) {
		memoLeft[index] = 1;
		return;
	}
	int gt = -1;
	int gtIndex = -1;
	for (int i = index - 1; i >= 1; i--) {
		if (A[index] > A[i]) {
			if (memoLeft[i] == 0) MemoizationLeft(i);
			if (gt < memoLeft[i]) {
				gt = memoLeft[i];
				gtIndex = i;
			}

		}
	}
	if (gtIndex == -1) {
		memoLeft[index] = 1;
		return;
	}
	memoLeft[index] = gt + 1;
	return;
}

void MemoizationRight(int index) {
	if (index == N) {
		memoRight[index] = 1;
		return;
	}
	int gt = -1;
	int gtIndex = -1;
	for (int i = index + 1; i <= N; i++) {
		if (A[index] > A[i]) {
			if (memoRight[i] == 0) MemoizationRight(i);
			if (gt < memoRight[i]) {
				gt = memoRight[i];
				gtIndex = i;
			}

		}
	}
	if (gtIndex == -1) {
		memoRight[index] = 1;
		return;
	}
	memoRight[index] = gt + 1;
	return;
}

int main() {
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	memoLeft[1] = 1;
	memoRight[N] = 1;
	for (int i = 1; i <= N; i++) {
		MemoizationLeft(i);
		MemoizationRight(i);
	}


	int gt = 0;
	int leftIndex = 0;
	int rightIndex = N+1;

	for (int i = 1; i <= N; i++) {
		gt = 0;
		leftIndex = 0;
		for (int j = i - 1; j >= 1; j--) {
			if (A[i] > A[j]) {
				if (gt < memoLeft[j]) {
					gt = memoLeft[j];
					leftIndex = j;
				}
			}
		}
		gt = 0;
		rightIndex = N+1;
		for (int j = i + 1; j <= N; j++) {
			if (A[i] > A[j]) {
				if (gt < memoRight[j]) {
					gt = memoRight[j];
					rightIndex = j;
				}
			}
		}
		length[i] = memoLeft[leftIndex] + memoRight[rightIndex] + 1;
	}

	int max = length[1];
	for (int i = 1; i <= N; i++) {
		if (length[i] > max) max = length[i];
	}

	cout << max;

	return 0;
}

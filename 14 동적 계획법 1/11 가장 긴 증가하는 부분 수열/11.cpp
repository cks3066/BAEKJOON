#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>

using namespace std;

int N;
int A[MAX];
int memo[MAX];

void LengthSequence(int index) {
	if(index == N)
		memo[N] = 1;
	else {
		if (memo[index] == 0) {
			memo[index] = 1;
			for (int i = index + 1; i <= N; i++) {
				if (A[index] < A[i] && memo[index] < memo[i] + 1) {
					memo[index] = memo[i] + 1;
				}
			}
		}
	}
	if (index == 1)
		return;
	LengthSequence(index - 1);
	return;
}

int main() {
	ios::sync_with_stdio(false);

	cin >> N;


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	LengthSequence(N);

	int gt = memo[1];
	for (int i = 1; i <= N; i++) {
		if (gt < memo[i]) gt = memo[i];
	}
	cout << gt;

	return 0;
}

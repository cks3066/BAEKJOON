#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>
#include <string>

using namespace std;

int memo[MAX][MAX];
string A, B;

// 만들수 있는 최장 부분수열의 길이 메모
void Memoization(int index) {
	if (index == -1) {
		return;
	}
	for (int i = 0; i < B.length(); i++) {
		if (A[index] == B[i]) {
			if (index == A.length() - 1) {
				memo[index][i] = 1;
			}
			else {
				int gt = 0;
				for (int j = index + 1; j <= A.length() - 1; j++) {
					for (int k = i + 1; k <= B.length() - 1; k++) {
						if (memo[j][k] > gt) {
							gt = memo[j][k];
						}
					}
				}
				memo[index][i] = gt + 1;
			}
		}

	}
	Memoization(index - 1);
	return;
}
int main() {
	ios::sync_with_stdio(false);

	cin >> A >> B;

	Memoization(A.length() - 1);

	int max = memo[0][0];
	for (int i = 0; i < A.length(); i++) {
		for (int j = 0; j < B.length(); j++) {
			if (max < memo[i][j]) {
				max = memo[i][j];
			}
		}
	}
	cout << max;
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 100+1

#include <iostream>

using namespace std;

int memo[MAX][MAX][2];
int arr[MAX][2];

int main() {
	ios::sync_with_stdio(false);

	int N,K;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	int gt = 0;
	int value = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = i; j >= 1; j--) {
			gt = 0;
			value = 0;
			if (arr[i][0] <= K && i == j) {
				memo[i][j][0] = arr[i][0];
				memo[i][j][1] = arr[i][1];
			}
			else if(arr[j][0] <= K){
				for (int n = j + 1; n <= i; n++) {
					for (int m = j + 1; m <= i; m++) {
						if (memo[n][m][0] != 0 && memo[n][m][0] + arr[j][0] <= K) {
							if (memo[n][m][0] > gt) {
								gt = memo[n][m][0];
								value = memo[n][m][1];
							}
						}
					}
				}
				memo[i][j][0] = gt + arr[j][0];
				memo[i][j][1] = value + arr[j][1];
			}
		}
	}

	int max = -1;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (max < memo[i][j][1])
				max = memo[i][j][1];
		}
	}
	cout << max;

	return 0;
}

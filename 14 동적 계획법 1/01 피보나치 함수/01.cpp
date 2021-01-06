#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int memo_zero[41];
int memo_one[41];
bool filled[41];

void fibonacci_memo(int n){
	if (n == 0) {
		memo_zero[0] = 1;
		memo_one[0] = 0;
		filled[0] = true;
	}
	else if (n == 1) {
		memo_zero[1] = 0;
		memo_one[1] = 1;
		filled[1] = true;
	}
	else {
		if (filled[n] == false) {
			fibonacci_memo(n - 1);
		}
		memo_zero[n] = memo_zero[n - 1] + memo_zero[n - 2];
		memo_one[n] = memo_one[n - 1] + memo_one[n - 2];
		filled[n] = true;
	}

	return;
}

int main() {
	ios::sync_with_stdio(false);

	int T,N;

	cin >> T;


	memo_zero[0] = 1;
	memo_one[0] = 0;
	filled[0] = true;

	memo_zero[1] = 0;
	memo_one[1] = 1;
	filled[1] = true;

	for (int i = 0; i < T; i++) {
		cin >> N;
		fibonacci_memo(N);
		cout << memo_zero[N] << " " << memo_one[N] << endl;
	}

	return 0;
}

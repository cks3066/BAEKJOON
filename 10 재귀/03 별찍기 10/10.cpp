#include <iostream>
#include <cassert>

using namespace std;

char arr[2187][2187] = { ' ', };

void makeRect(int n, int I = 0, int J = 0) {
	assert(n % 3 == 0);

	if (n == 3) {
		for (int i = I; i < I + n; i++) {
			for (int j = J; j < J + n; j++) {
				if (i == n / n + I && j == n / n + J)
					arr[i][j] = ' ';
				else
					arr[i][j] = '*';
			}
		}
	}
	else {
		for (int i = I; i < I + n; i += (n / 3)) {
			for (int j = J; j < J + n; j += (n / 3)) {
				if (i == n / 3 + I && j == n / 3 + J)
					arr[i][j] = ' ';
				else
					makeRect(n / 3, i, j);
			}
		}
	}
}
int main() {
	int N;

	cin >> N;
	assert(N % 3 == 0);

	for (int i = 0; i < 2187; i++) {
		for (int j = 0; j < 2187; j++) {
			arr[i][j] = ' ';
		}
	}
	makeRect(N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}

	return 0;
}

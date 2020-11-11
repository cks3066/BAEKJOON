#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int M, N, sum = 0, min = 0, check = 0;

	cin >> M >> N;

	assert(M > 0 && M <= 10000);
	assert(N > 0 && N <= 10000);
	assert(M <= N);

	for (int i = M; i <= N; i++) {
		int factor = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				factor++;
			}
		}
		if (factor == 2) {
			sum += i;
			if (check == 0) {
				min = i;
				check++;
			}
		}

	}

	if (sum == 0)
	{
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << min << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int f(int k, int n) {
	if (n == 1) {
		return 1;
	}
	if (k == 0) {
		return n;
	}
	return f(k, n - 1) + f(k - 1, n);
}

int main() {
	int T, k, n;	// k층 n호

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;

		cout << f(k, n) << endl;
	}

	return 0;
}

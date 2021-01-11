#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 2; i <= N; i++) {
		if (N % i == 0) {
			cout << i << endl;
			N /= i;
			if (N == 1) break;
			else i = 1;
		}
	}

	return 0;
}

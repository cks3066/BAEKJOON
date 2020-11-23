#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int N;

	cin >> N;
	assert(N >= 1 && N <= 1000000);

	int minimum = N;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					for (int m = 0; m < 10; m++) {
						for (int n = 0; n < 10; n++) {
							if (100000 * i + j * 10000 + k * 1000 + l * 100 + m * 10 + n + i + j + k + l + m + n== N) {
								if (100000 * i + j * 10000 + k * 1000 + l * 100 + m * 10 + n < minimum) {
									minimum = 100000 * i + j * 10000 + k * 1000 + l * 100 + m * 10 + n;
									cnt++;
								}
							}
						}
					}
				}
			}
		}
	}

	if (cnt != 0) {
		cout << minimum;
	}
	else
		cout << 0;

	return 0;
}

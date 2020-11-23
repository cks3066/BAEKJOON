#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int N, M;
	int cards[100];

	cin >> N >> M;

	assert(N >= 3 && N <= 100);
	assert(M >= 10 && M <= 300000);

	for (int i = 0; i < N; i++) {
		cin >> cards[i];
	}

	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (i != j && i != k && j != k) {
					if (cards[i] + cards[j] + cards[k] > max && cards[i] + cards[j] + cards[k] <= M) {
						max = cards[i] + cards[j] + cards[k];
					}
				}
			}
		}
	}

	cout << max;

	return 0;
}

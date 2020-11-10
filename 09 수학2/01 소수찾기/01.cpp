#include <iostream>

using namespace std;

int main() {
	int N, number = 0;

	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		int k = 0;
		cin >> arr[i];

		if (arr[i] > 1) {
			for (int j = 1; j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					k++;
				}
			}
			if (k == 2) {
				number++;
			}
		}
	}

	cout << number;

	return 0;
}

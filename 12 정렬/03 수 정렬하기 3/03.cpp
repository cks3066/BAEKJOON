#include <iostream>

using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);

	int N, temp;
	int num[10000] = { 0, };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		num[temp - 1]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (num[i] != 0) {
			for (int j = 0; j < num[i]; j++) {
				cout << i + 1 << "\n";
			}
		}
	}
	return 0;
}

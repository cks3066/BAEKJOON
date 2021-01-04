#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int N, temp;
	int frq[8001] = { 0, };
	int sum = 0;

	cin >> N;

	vector<int> input(N);

	for (int i = 0; i < N; i++) {
		cin >> temp;
		input[i] = temp;
		frq[temp + 4000]++;
	}

	sort(input.begin(), input.end());

	vector<int>::iterator iter = input.begin();

	for (iter = input.begin(); iter != input.end(); iter++) {
		sum += *iter;
	}

	int index;
	int gl_frq = 0;
	int cnt = 0;
	for (int i = 0; i < 8001; i++) {
		if (frq[i] > gl_frq) {
			gl_frq = frq[i];
			index = i;
		}
	}

	for (int i = 0; i < 8001; i++) {
		if (frq[i] == gl_frq) cnt++;
		if (cnt == 2) {
			index = i;
			break;
		}
	}

	double first = (double)sum / N;
	cout << round(first) << "\n";
	cout << input[N / 2] << "\n";
	cout << index - 4000 << "\n";
	cout << input[N - 1] - input[0] << "\n";

	return 0;
}

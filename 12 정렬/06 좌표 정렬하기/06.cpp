#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);

	int N, X, Y;

	cin >> N;

	vector <pair<int, int>> input;
	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		input.push_back({ X,Y });
	}

	sort(input.begin(), input.end());

	for (auto i : input) {
		cout << i.first << " " << i.second << "\n";
	}

	return 0;
}

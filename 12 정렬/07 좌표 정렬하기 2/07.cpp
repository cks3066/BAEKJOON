#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int,int>a, pair<int,int>b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(false);

	int N, X, Y;

	cin >> N;

	vector <pair<int, int>> input;
	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		input.push_back({ X,Y });
	}

	sort(input.begin(), input.end(),compare);

	for (auto i : input) {
		cout << i.first << " " << i.second << "\n";
	}

	return 0;
}

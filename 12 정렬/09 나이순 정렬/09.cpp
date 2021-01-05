#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int,string> a, pair<int,string> b) {
	if (a.first == b.first) return;
	return a.first < b.first;
}
int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	pair<int, string> *input = new pair<int,string>[N];

	for (int i = 0; i < N; i++) {
		cin >> input[i].first >> input[i].second;
	}

	stable_sort(input, input + N, compare);

	for (int i = 0; i < N; i++) {
		cout << input[i].first << " " << input[i].second << "\n";
	}

	return 0;
}

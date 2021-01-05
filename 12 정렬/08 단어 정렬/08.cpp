#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a,string b) {
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if ((int)a[i] == (int)b[i])
				continue;
			return (int)a[i] < (int)b[i];
		}
	}
	return a.size() < b.size();
}
int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	string* input = new string[N];

	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}

	sort(input, input + N, compare);

	for (int i = 0; i < N; i++) {
		if (i > 0 && input[i] == input[i - 1]) continue;
		cout << input[i] << "\n";
	}

	return 0;
}

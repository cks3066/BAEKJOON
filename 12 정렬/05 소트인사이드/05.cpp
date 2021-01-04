#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstdio>
#include <functional>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;
	assert(N > 0 && N <= 1000000000);

	int temp = N, cnt = 1;
	while (true) {
		if (temp / 10 == 0) break;
		temp /= 10;
		cnt++;
	}

	char* input = new char[cnt];

	sprintf(input, "%d", N);

	sort(input, input + cnt, greater<int>());

	for (int i = 0; i < cnt; i++) {
		cout << input[i];
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int N;
	int arr[MAX];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int result = arr[0] * arr[N - 1];

	cout << result;
	return 0;
}

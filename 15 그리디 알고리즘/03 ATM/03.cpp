#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int P[MAX];

int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> P[i];
	}

	sort(P+1, P+N+1);
	
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		P[i] += P[i - 1];
		sum += P[i];
	}

	cout << sum;

	return 0;
}

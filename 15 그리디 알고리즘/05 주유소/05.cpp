#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000+1

#include <iostream>

using namespace std;

long long int cityDst[MAX];
long long int oilPrice[MAX];

int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 1; i < N; i++) {
		cin >> cityDst[i];
	}

	for (int i = 1; i <= N; i++) {
		cin >> oilPrice[i];
	}

	long long int criteria = oilPrice[1];
	long long int sum = 0;

	for (int i = 1; i < N; i++) {
		if (criteria > oilPrice[i]) {
			criteria = oilPrice[i];
		}
		sum += criteria * cityDst[i];
	}

	cout << sum;

	return 0;
}

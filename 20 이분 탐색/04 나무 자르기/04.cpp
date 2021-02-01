#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

long long int trees[1000001];
long long int N, M, answer;

void binarySearch(long long int low, long long int high)
{
	if (low > high) return;

	long long int mid = (low + high) / 2;

	long long int sum = 0;
	for (int i = 1; i <= N; i++) {
		if (trees[i] > mid)
			sum += (trees[i] - mid);
	}

	if (sum >= M) {
		if (answer < mid) answer = mid;
		binarySearch(mid + 1, high);
	}
	else binarySearch(low, mid - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

	for (int i = 1; i <= N; i++)
		cin >> trees[i];
	sort(trees + 1, trees + N + 1);

	binarySearch(1, trees[N]);

	cout << answer;

    return 0;
}

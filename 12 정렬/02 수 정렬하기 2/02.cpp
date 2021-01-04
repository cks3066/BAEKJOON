#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;


int main() {
	int N;
	int tmp;

	cin >> N;
	assert(N >= 1 && N <= 1000000);

	int* nums = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	sort(nums, nums + N);

	for (int i = 0; i < N; i++) {
		cout << nums[i] << "\n";
	}

	return 0;
}

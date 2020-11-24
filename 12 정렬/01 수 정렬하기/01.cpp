#include <iostream>
#include <cassert>

using namespace std;

#define SWAP(X,Y,T) ((T)=(X), (X)=(Y), (Y)=(T))

int main() {
	int N;
	int tmp;

	cin >> N;
	assert(N >= 1 && N <= 1000);

	int* nums = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

  // 버블정렬
	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (nums[j] > nums[j + 1])
				SWAP(nums[j], nums[j + 1], tmp);
		}
	}

	for (int i = 0; i < N; i++) {
		cout << nums[i] << endl;
	}

	return 0;
}

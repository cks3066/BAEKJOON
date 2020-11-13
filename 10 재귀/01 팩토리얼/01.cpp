#include <iostream>
#include <cassert>

using namespace std;

int factorial(int N) {
	
	if (N == 1) return 1;

	return N * factorial(N - 1);
}

int main() {
	int N;

	cin >> N;
	assert(N >= 0 && N <= 12);

	if (N == 0) cout << 1;
	else cout << factorial(N);

	return 0;
}

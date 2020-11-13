#include <iostream>
#include <cassert>

using namespace std;

int fibonacchi(int n) {
	assert(n >= 0);
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacchi(n - 1) + fibonacchi(n - 2);
}

int main() {
	int n;

	cin >> n;
	assert(n >= 0 && n <= 20);

	cout << fibonacchi(n);

	return 0;
}

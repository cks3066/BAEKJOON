#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

#define PI 3.14159265358979

int main() {
	int R;

	cin >> R;

	assert(R >= 1 && R <= 10000);

	printf("%6f\n", PI * R * R);
	printf("%6f", (double)(2 * R * R));


	return 0;
}

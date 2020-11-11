#include <iostream>
#include <cassert>

using namespace std;

int minimum(int a, int b, int c, int d) {
	int result;

	if (a <= b && a <= c && a <= d) result = a;
	else if (b <= a && b <= c && b <= d) result = b;
	else if (c <= a && c <= b && c <= d) result = c;
	else if (d <= a && d <= b && d <= c) result = d;

	return result;
}

int main() {
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	assert(w >= 1 && w <= 1000);
	assert(h >= 1 && h <= 1000);
	assert(x >= 1 && x <= w-1);
	assert(y >= 1 && y <= h-1);

	cout << minimum(x, y, w - x, h - y);

	return 0;
}

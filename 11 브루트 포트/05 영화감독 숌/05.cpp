#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int N;
	long long int title[10000];
	int num = 0;

	cin >> N;
	assert(N >= 1 && N <= 10000);

	for (int i = 666; ; i++) {
		int a, b, c, d, e, f, g;
		int temp;
		int cnt = 0;

		if (num == 10000) break;

		if (i >= 100 && i < 1000) {
			temp = i;
			a = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			c = temp;

			if (a == 6) {
				if (b == 6) {
					if (c == 6) cnt++;
				}
			}

			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

		}
		else if (i >= 1000 && i < 10000) {
			temp = i;
			a = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			c = temp % 10;
			temp /= 10;
			d = temp;


			if (a == 6) {
				if (b == 6) {
					if (c == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (b == 6) {
				if (c == 6) {
					if (d == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

		}

		else if (i >= 10000 && i < 100000) {
			temp = i;
			a = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			c = temp % 10;
			temp /= 10;
			d = temp % 10;
			temp /= 10;
			e = temp;

			if (a == 6) {
				if (b == 6) {
					if (c == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (b == 6) {
				if (c == 6) {
					if (d == 6) cnt++;
				}
			}

			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (c == 6) {
				if (d == 6) {
					if (e == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

		}
		else if (i >= 100000 && i < 1000000) {
			temp = i;
			a = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			c = temp % 10;
			temp /= 10;
			d = temp % 10;
			temp /= 10;
			e = temp % 10;
			temp /= 10;
			f = temp;

			if (a == 6) {
				if (b == 6) {
					if (c == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (b == 6) {
				if (c == 6) {
					if (d == 6) cnt++;
				}
			}

			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (c == 6) {
				if (d == 6) {
					if (e == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (d == 6) {
				if (e == 6) {
					if (f == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}
		}
		else if (i >= 1000000 && i < 10000000) {
			temp = i;
			a = temp % 10;
			temp /= 10;
			b = temp % 10;
			temp /= 10;
			c = temp % 10;
			temp /= 10;
			d = temp % 10;
			temp /= 10;
			e = temp % 10;
			temp /= 10;
			f = temp % 10;
			temp /= 10;
			g = temp;

			if (a == 6) {
				if (b == 6) {
					if (c == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (b == 6) {
				if (c == 6) {
					if (d == 6) cnt++;
				}
			}

			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (c == 6) {
				if (d == 6) {
					if (e == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (d == 6) {
				if (e == 6) {
					if (f == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

			if (e == 6) {
				if (f == 6) {
					if (g == 6) cnt++;
				}
			}
			if (cnt == 1) {
				title[num++] = i;
				continue;
			}

		}
	}
	cout << title[N - 1];

	return 0;
}

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

int main() {
	int T, x1, y1, r1, x2, y2, r2;
	double dis;

	cin >> T;

	for (int i = 0; i < T; i++) {
			cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		
		if ((dis == 0) && (r1 == r2)) {
			cout << -1;
		}
		else if (( dis > r1 + r2) || (dis < abs(r1-r2))) {
			cout << 0;
		}
		else if ((dis == r1 + r2) || (dis == abs(r1-r2))) {
			cout << 1;
		}
		else if ((dis > abs(r1-r2)) && (dis < r1 + r2)) {
			cout << 2;
		}
		cout << endl;
	}

	return 0;
}

#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int x[3], y[3];

	cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

	int xtemp = x[0], ytemp = y[0];
	int xdif = 0, ydif = 0;
	int xcnt = 0, ycnt = 0;
	for (int i = 0; i  < 3; i++) {
		if (xtemp == x[i]) xcnt++;
		else xdif = x[i];
		if (ytemp == y[i]) ycnt++;
		else ydif = y[i];
	}
	
	if (xcnt == 1) cout << xtemp << " ";
	else cout << xdif << " ";
	if (ycnt == 1) cout << ytemp;
	else cout << ydif;

	return 0;
}

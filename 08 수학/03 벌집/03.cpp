#include <iostream>

using namespace std;

int main() {
		long long unsigned int N = 0;
		int howManyRooms = 1;
		long long unsigned int changingPoint[1000000];

		cin >> N;

		changingPoint[0] = 1;
		for (int i = 1; i < 1000000; i++) {
			changingPoint[i] = changingPoint[i - 1] + 6 * i;
		}

		for (int i = 0; i < 1000000; i++) {
			if (N <= changingPoint[i]) {
				howManyRooms = i + 1;
				break;
			}
		}

		cout << howManyRooms << endl;
	return 0;
}

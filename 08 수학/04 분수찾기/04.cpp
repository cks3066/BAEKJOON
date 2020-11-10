#include <iostream>

using namespace std;

int main() {
	int X = 0;
	long long int checkPoint[10000];
	int childNum = 0, parentNum = 0;
	int index = 0;
	int addNum = 0;

	cin >> X;

	checkPoint[0] = 1;
	for (int i = 1; i < 10000; i++) {
		checkPoint[i] = checkPoint[i - 1] + i;
	}

	for (int i = 0; i < 10000; i++) {
		if (X < checkPoint[i]) {
			index = i - 1;
			break;
		}
	}

	if (index % 2 == 0)	{
		childNum = index + 1;
		parentNum = 1;
		while (X != checkPoint[index] + addNum)	{
			--childNum;
			++parentNum;
			++addNum;
		}
	}
	else {
		childNum = 1;
		parentNum = index + 1;
		while (X != checkPoint[index] + addNum) {
			++childNum;
			--parentNum;
			++addNum;
		}
	}

	cout << childNum << "/" << parentNum;

}

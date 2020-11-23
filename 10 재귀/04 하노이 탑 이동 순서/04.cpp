#include <iostream>
#include <cassert>

using namespace std;

//N : 시작 지점에 있는 갯수, start , middle , target
void hanoi(int N, int start = 1, int middle = 2, int target = 3) {
	// start에 있는 N을 target으로 옮기기 위해 N-1을 middle에 옮긴다.
	// start에 N이 1인경우 target으로 옮기고 함수 끝
	if (N == 1) {
		printf("%d %d\n", start, target);
	}
	else {
		hanoi(N - 1, start, target, middle);
		printf("%d %d\n", start, target);
		hanoi(N - 1, middle, start, target);
	}
}
int main() {
	int N, execCnt = 1;

	cin >> N;
	assert(N >= 1 && N <= 20);


	for (int i = 0; i < N; i++) {
		execCnt *= 2;
	}
	cout << execCnt - 1 << endl;
	
	hanoi(N);

	return 0;
}

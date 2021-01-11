#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000+1

#include <iostream>

using namespace std;

int memo[MAX];
bool filled[MAX];

int MakeOne(int N) {
	int divThr = -1, divTwo = -1, minOne = -1;
	if (N == 1) {
		memo[1] = 0;
		filled[1] = true;
	}
	else if (N == 2 || N == 3) {
		memo[N] = 1;
		filled[N] == true;
	}
	else
		if (filled[N] == false) {
			minOne = 1 + MakeOne(N - 1);
			if (N % 3 == 0) {
				divThr = 1 + MakeOne(N / 3);
			}
			if (N % 2 == 0) {
				divTwo = 1 + MakeOne(N / 2);
			}
			if (divThr == -1 && divTwo == -1) {
				memo[N] = minOne;
			}
			else if (divThr > 0 && divTwo > 0) {
				if (divThr <= divTwo) {
					if (divThr < minOne)
						memo[N] = divThr;
					else
						memo[N] = minOne;
				}
				else if (divThr > divTwo) {
					if (divTwo < minOne)
						memo[N] = divTwo;
					else
						memo[N] = minOne;
				}
			}
			else if (divThr > 0 && divTwo == -1) {
					if (divThr < minOne)
						memo[N] = divThr;
					else
						memo[N] = minOne;
			}
			else if (divThr == -1 && divTwo > 0) {
					if (divTwo < minOne)
						memo[N] = divTwo;
					else
						memo[N] = minOne;
			}
			filled[N] = true;
		}

	return memo[N];
}
int main() {
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	cout << MakeOne(N);

	return 0;
}

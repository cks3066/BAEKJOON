#include <iostream>
#include <cassert>

using namespace std;

#define MaxNum 1000001
bool *primeArray = new bool[MaxNum];

//에라토스테네스의 체
void primeNumberSieve() {

	for (int i = 2; i <= MaxNum; i++)
		primeArray[i] = true;

	for (int i = 2; i * i <= MaxNum; i++)
	{
		if (primeArray[i] == true)
			for (int j = i * i; j <= MaxNum; j += i)
				primeArray[j] = false;
	}
}

void InputNum(int start, int last)
{
	for (int i = start; i <= last; i++)
	{
		if (primeArray[i] == true)
			cout << i << "\n";
	}
}

int main() {
	int M, N;

	cin >> M >> N;

	assert(M >= 1 && M <= N && N <= 1000000);

	std::ios::sync_with_stdio(false);
	primeNumberSieve();

	InputNum(M, N);

	return 0;
}

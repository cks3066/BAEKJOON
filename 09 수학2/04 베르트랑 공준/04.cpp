/*
'베르트랑 공준'은 임의의 자연수 n에 대하여,
n보다 크고, 2n보다 작거나 같은 소수는
적어도 하나 존재한다는 내용을 담고 있다.
*/


#include <iostream>
#include <cassert>

using namespace std;

#define TEST_CASE 10000+1
#define MaxNum 1000001
bool* primeArray = new bool[MaxNum];

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

int countPrimenuber(int start, int last){
    int count = 0;

    for (int i = start + 1; i <= last; i++)
    {
        if (primeArray[i] == true)
            count++;
    }

    return count;
}

int main() {
    int input[TEST_CASE];
    int num = 0;

    while (true)
    {
        cin >> input[num];
        if (input[num] == 0 || num == TEST_CASE)
            break;
        num++;
    }

    std::ios::sync_with_stdio(false);
    primeNumberSieve();

    for (int i = 0; i < num; i++) {
        cout << countPrimenuber(input[i], input[i] * 2) << endl;
    }

	return 0;
}

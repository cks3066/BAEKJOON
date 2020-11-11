/*
'골드바흐의 추측'은 유명한 정수론의 미해결 문제로, 
2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다.
*/

#include <iostream>
#include <cassert>

using namespace std;

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

void Goldbach(int n){
    int fst = 0, snd= 0;

    for (int i = 2; i <= n; i++)
    {
        if (primeArray[i] == true && primeArray[n - i] == true) {
            if (i > n - i) break;
            fst = i;
            snd = n - i;
        }
    }
    cout << fst << " " << snd << endl;
}

int main() {
    int T,n;

    cin >> T;

    std::ios::sync_with_stdio(false);
    primeNumberSieve();

    for (int i = 0; i < T; i++) {
        cin >> n;
        assert(n % 2 == 0 && n >= 4 && n <= 10000);

        Goldbach(n);

    }

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
    int N, F;

    cin >> N >> F;

    N = N / 100;
    int tmp = N * 100;

    while (true) {
        if ((tmp % F) == 0) break;
        tmp++;
    }

    if (tmp - N * 100 < 10) cout << 0;
    cout << tmp - N * 100;

    return 0;
}

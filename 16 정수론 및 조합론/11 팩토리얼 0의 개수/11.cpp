#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(false);

    cin >> N;

    int cnt = 0;
    for (int i = N; i >= 1; i--) {
        if (i % 5 == 0) {
            int k = i;
            while (k % 5 == 0) {
                cnt++;
                k /= 5;
            }
        }
    }

    cout << cnt;

    return 0;
}

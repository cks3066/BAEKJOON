#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int a, b;
        cin >> a >> b;

        int num = 1;
        for (int j = 0; j < b; j++) {
            num *= (a % 10);
            num = num % 10;
        }
        if (num == 0)
            cout << 10 << '\n';
        else
        cout << num % 10 << '\n';
    }

    return 0;
}

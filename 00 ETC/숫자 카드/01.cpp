#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>

using namespace std;

int N, M;
map<int, int> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        m[input] += 1;
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        m[input] -= 1;
        if (m[input] < 0)
            cout << 0 << " ";
        else
            cout << 1 << " ";
    }

    return 0;
}

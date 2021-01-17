#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int N;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (true) {
        if (q.size() == 1) break;
        q.pop();
        if (q.size() == 1) break;
        q.push(q.front());
        q.pop();
        if (q.size() == 1) break;
    }
    cout << q.front();

    return 0;
}

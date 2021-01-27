#define _CRT_SECURE_NO_WARNINGS

#include <queue>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (cmd == "front") {
            cout << (s.empty() ? -1 : s.front()) << '\n';
        }
        else if (cmd == "size") {
            cout << (s.empty() ? 0 : s.size()) << '\n';
        }
        else if (cmd == "pop") {
            cout << (s.empty() ? -1 : s.front()) << '\n';
            if (!s.empty()) s.pop();
        }
        else if (cmd == "empty") {
            cout << (s.empty() ? 1 : 0) << '\n';
        }
        else if (cmd == "back") {
            cout << (s.empty() ? -1 : s.back()) << '\n';
        }
    }

    return 0;
}

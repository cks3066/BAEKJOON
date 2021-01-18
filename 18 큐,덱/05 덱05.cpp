#define _CRT_SECURE_NO_WARNINGS

#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    deque<int> d;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_front") {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if (cmd == "push_back") {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if (cmd == "pop_front") {
            cout << (d.empty() ? -1 : d.front()) << '\n';
            if (!d.empty()) d.pop_front();
        }
        else if (cmd == "pop_back") {
            cout << (d.empty() ? -1 : d.back()) << '\n';
            if (!d.empty()) d.pop_back();
        }
        else if (cmd == "front") {
            cout << (d.empty() ? -1 : d.front()) << '\n';
        }
        else if (cmd == "back") {
            cout << (d.empty() ? -1 : d.back()) << '\n';
        }
        else if (cmd == "size") {
            cout << (d.empty() ? 0 : d.size()) << '\n';
        }
        else if (cmd == "empty") {
            cout << (d.empty() ? 1 : 0) << '\n';
        }

    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    int cnt = 0;

    map<string, int> m;
    vector<string> v;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        ++m[input];
    }

    for (int i = 0; i < M; i++) {
        string input;
        cin >> input;
        ++m[input];
        if (m[input] == 2) {
            ++cnt;
            v.push_back(input);
        }
    }

    sort(v.begin(), v.end());

    cout << cnt << '\n';
    for (auto k : v) {
        cout << k << '\n';
    }

    return 0;
}

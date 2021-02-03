#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        pair<int, int> p[100000];
        bool fall[100000] = { 0, };

        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> p[i].first >> p[i].second;
        }
        sort(p, p + N);

        for (int i = 0; i < N - 1; i++) {
            if (!fall[i]) {
                for (int j = i + 1; j < N; j++) {
                    if (!fall[j] && p[i].second < p[j].second)
                        fall[j] = true;
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (!fall[i]) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}

// 합격자 명단을 bool 형에 나누어 해당되지 않는 경우를 전부 제외하고 연산하려고 하였으나
// 큐로 구현했던 것과 마찬가지로 최악의 경우 O(N^2) 는 마찬가지.

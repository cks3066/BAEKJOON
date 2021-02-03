#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <queue>

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
        queue<int> q;
        bool pass[100000] = { 0, };
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> p[i].first >> p[i].second;  // 서류석차 , 면접석차
        }
        sort(p, p + N);

        pass[0] = true;
        for (int i = 1; i < N; i++) {
            if (p[0].second > p[i].second) {
                q.push(i);
                pass[i] = true;
            }
        }

        while (!q.empty()) {
            int current_index = q.front();
            q.pop();
            if (pass[current_index]) {
                for (int i = current_index; i < N; i++) {
                    if (pass[i] == true && p[current_index].second < p[i].second)
                        pass[i] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (pass[i]) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}

// 큐에 합격가능자를 담아서 시간를 조금 더 줄이려고했으나
// 최악의 경우 O(N^2) 는 마찬가지

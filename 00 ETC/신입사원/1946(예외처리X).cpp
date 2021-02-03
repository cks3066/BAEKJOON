#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        pair<int, int> p[100000];
        vector < pair<int, int> > v;

        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> p[i].first >> p[i].second;
        }
        sort(p, p + N);

        v.push_back(p[0]);
        for (int i = 1; i < N; i++) {
            if (p[0].second > p[i].second) {
                v.push_back(p[i]);
            }
        }

        sort(v.begin(), v.end(), compare);

        int cnt = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[0].first >= v[i].first) {
                cnt++;
            }
        }
        cout << cnt << '\n';

    }
    return 0;
}

/*
반례
1
6
6 4
4 1
5 2
1 6
2 3
3 5
*/

// sort 를 first기준, second 기준으로 두번 사용해 모든 값을 처리하려고 하였으나 예외발생

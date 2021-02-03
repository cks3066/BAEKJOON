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

        int cnt = 1;
        int min = p[0].second;
        for (int i = 1; i < N; i++) {
            if (min > p[i].second) {
                min = p[i].second;
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}

// O(N^2)의 시간복잡도로 예외를 찾기위해 for문을 두번 돌지 않아도
// O(N)의 시간복잡도로 한번의 for문에서 최솟값의 갱신을 해주며 예외처리를 할 수 있음
// 문제가 주어졌을 때 '당장 눈 앞에 보이는 최적의 상황' 이 어떤것을 의미하고
// 어떤 로직에 부여해야 하는지 잘 판단할 것

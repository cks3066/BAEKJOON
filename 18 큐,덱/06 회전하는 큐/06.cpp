#define _CRT_SECURE_NO_WARNINGS

#include <deque>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int N, M;
    deque<int> dq;
    vector<int> v;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int cnt = 0;
    int index = 0;
    while (true) {
        if (dq.size() == 0) break;
        bool right = false;
        bool left = false;

        if (dq.front() == v[index]) {
            dq.pop_front();
            ++index;
        }
        else {
            // 왼쪽 오른쪽 어디갈지 판단
            for (int i = 0; i < dq.size(); i++) {
                if (dq[i] == v[index]) {
                    right = true;
                    break;
                }
                else if (dq[dq.size() - 1 - i] == v[index]) {
                    left = true;
                    break;
                }
            }
            if (right) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            else {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        if (dq.size() == 0) break;
        if (index >= M) break;
    }
    cout << cnt;
    return 0;
}

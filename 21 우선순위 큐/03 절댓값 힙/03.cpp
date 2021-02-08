#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue <pair<int,int>> pq;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        if (input < 0) {
            pair<int, int> x;
            x.first = input;
            x.second = 1; // 음수
            pq.push(x);
        }
        else if (input > 0) {
            pair<int, int> x;
            x.first = input * -1;
            x.second = 0; // 양수
            pq.push(x);
        }
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                pair<int, int> output;
                output = pq.top();
                pq.pop();
                if (output.second) {
                    cout << output.first << '\n';
                }
                else {
                    cout << output.first * -1 << '\n';
                }
            }
        }
    }
    return 0;
}

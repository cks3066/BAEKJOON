#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue <int> pq;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        if (input)
            pq.push(input * -1);
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                int output;
                output = pq.top() * -1;
                cout << output << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}

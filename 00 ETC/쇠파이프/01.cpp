#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string pipe;
    cin >> pipe;

    stack<char> s;

    int cnt = 0;
    for (int i = 0; i < pipe.length(); i++) {
        if (pipe[i] == '(') {
            s.push(pipe[i]);
        }
        else {  // ')'
            if (i > 0 && pipe[i - 1] == '(') {  // 레이저
                s.pop();
                cnt += s.size();
            }
            else {
                s.pop();
                ++cnt;
            }
        }
    }
    cout << cnt;

    return 0;
}

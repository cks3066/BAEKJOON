#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K;

    cin >> K;

    while (K--) {
        stack<char> s;
        string input;
        cin >> input;
        for (int i = 0; i < input.length(); i++) {
            s.push(input[i]);
        }

        bool finish = true;
        int cntRight = 0;
        while (s.size() && finish) {
            if (s.top() == ')') {
                ++cntRight;
                s.pop();
            }
            else {
                --cntRight;
                s.pop();
            }
            if (cntRight < 0) {
                cout << "NO\n";
                finish = false;
            }
        }
        if (cntRight == 0)
            cout << "YES\n";
        else if (cntRight > 0)
            cout << "NO\n";
    }
    return 0;
}

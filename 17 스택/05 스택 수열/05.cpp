#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cur = 0;
    stack<int> s;
    vector<int> v;
    vector<char> result;
    bool check = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    for (int k = 1; k <= n; k++) {
        s.push(k);
        result.push_back('+');

        while (v[cur] == s.top()) {
            result.push_back('-');
            s.pop();
            cur++;
            if (s.size() == 0) {
                break;
            }
            if (v[cur] < s.top() && v[cur] != s.top())
            {
                check = false;
            }
        }
    }

    if (check == false) cout << "NO";
    else
        for (auto i : result) {
            cout << i << "\n";
        }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        stack<char> s,tmp;
        string input;

        getline(cin, input);
        for (int i = 0; i < input.length(); i++) {
            s.push(input[i]);
        }

        if (s.size() == 1 && s.top() == '.') return 0;

        bool finish = true;
        while (s.size() && finish) {
            if (s.top() == '('){
                if (tmp.size() == 0)
                    finish = false;
                else {
                    if (tmp.top() == ')') {
                        s.pop();
                        tmp.pop();
                    }
                    else
                        finish = false;
                }
            }
            else if (s.top() == ')') {
                tmp.push(s.top());
                s.pop();
            }
            else if (s.top() == '[') {
                if (tmp.size() == 0)
                    finish = false;
                else {
                    if (tmp.top() == ']') {
                        s.pop();
                        tmp.pop();
                    }
                    else
                        finish = false;
                }
            }
            else if(s.top() == ']') {
                tmp.push(s.top());
                s.pop();
            }
            else s.pop();

        }
        if (tmp.size() != 0) {
            cout << "no\n";
        }
        else {
            if (finish == true)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}

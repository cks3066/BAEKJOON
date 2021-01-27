#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <list>

using namespace std;

list<char> lst;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        lst.push_back(s[i]);
    }

    cin >> M;

    list<char>::iterator iter = lst.end();
    
    for (int i = 0; i < M; i++) {
        char command;
        cin >> command;
        if (command == 'L') {
            if(iter != lst.begin())
            --iter;
        }
        else if (command == 'D') {
            if(iter != lst.end())
            ++iter;
        }
        else if (command == 'B') {
            if (iter != lst.begin()) {
                --iter;
                iter = lst.erase(iter);
            }
        }
        else if (command == 'P') {
            char ch;
            cin >> ch;
            lst.insert(iter, ch);
        }
    }

    for (auto k : lst) {
        cout << k;
    }

    return 0;
}

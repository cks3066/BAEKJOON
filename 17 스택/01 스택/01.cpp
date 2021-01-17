#define _CRT_SECURE_NO_WARNINGS
#define MAX 20000+1

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int v[MAX];
    int N;
    int cur = -1;

    string command[MAX];

    cin >> N;

    for (int i = 0; i < N; i++) {

        cin >> command[i];

        if (command[i] == "push") {
            int X;
            cin >> X;
            v[++cur] = X;
        }
        else if(command[i] == "pop") {
            if(cur < 0)
                cout << -1 << endl;
            else {
                cout << v[cur--] << endl;
            }
        }
        else if (command[i] == "size") {
            cout << cur + 1 << endl;
        }
        else if (command[i] == "empty") {
            if (cur < 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (command[i] == "top") {
            if (cur < 0)
                cout << -1 << endl;
            else
                cout << v[cur] << endl;
        }
    }

    return 0;
}

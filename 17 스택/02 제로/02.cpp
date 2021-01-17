#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    stack<int> s;
    
    cin >> K;

    while (K--) {
        int n;
        cin >> n;
        if (n != 0)
            s.push(n);
        else
            s.pop();
    }
    
    int sum = 0;
    while (s.empty() != 1) {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}

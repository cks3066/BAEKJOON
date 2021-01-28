#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int N, S;
vector<int> v;
int cnt = 0;

void dfs(int i, int sum) {
    if (i == N) return;
    if (sum + v[i] == S) cnt++;

    dfs(i + 1, sum);
    dfs(i + 1, sum + v[i]);

}

int main()
{
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    dfs(0, 0);

    cout << cnt;
    
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 13

#include <iostream>

using namespace std;

int N;
int lotto[MAX];
int combi[MAX];

void dfs(int start, int depth) {

    if (depth == 6) {
        for (int i = 0; i < 6; i++) {
            cout << combi[i] << ' '; 
        }
        cout << '\n';
        return;
    }

    for (int i = start; i < N; i++) { 
        combi[depth] = lotto[i];
        dfs(i + 1, depth + 1);
    }

}

int main()
{

    while (true) {
        cin >> N;

        if (N == 0) break;
        
        for (int i = 0; i < N; i++) {
            cin >> lotto[i];
        }
        dfs(0, 0);
        cout << '\n';
    }
    return 0;
}

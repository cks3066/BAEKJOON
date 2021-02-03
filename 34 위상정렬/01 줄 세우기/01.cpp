#define _CRT_SECURE_NO_WARNINGS
#define MAX 32000+1

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <queue>

using namespace std;

int inDegree[MAX];
vector<int> a[MAX];
int N, M;

void topologySort() {
    int result[MAX];
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (inDegree[i] == 0) q.push(i);
    }

    for (int i = 1; i <= N; i++) {
        if (q.empty()) {
            cout << "사이클 발생.";
            return;
        }
        int x = q.front();  
        q.pop();
        result[i] = x;
        for (int j = 0; j < a[x].size(); j++) {
            int y = a[x][j];
            if (--inDegree[y] == 0) {
                q.push(y);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << result[i] << ' ';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        inDegree[y]++;
    }

    topologySort();

    return 0;
}

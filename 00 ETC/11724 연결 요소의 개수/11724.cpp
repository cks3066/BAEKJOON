#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector<int> graph[1000+1];
bool visited[1000 + 1];

void DFS(int current_node) {
    if (visited[current_node]) return;
    visited[current_node] = true;
    for (int i = 0; i < graph[current_node].size(); i++) {
        int next_node = graph[current_node][i];
        DFS(next_node);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        graph[i].push_back(i);
    }

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i] && !graph[i].empty()) {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt;

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>;

using namespace std;

bool visited[100+1];
vector<int> graph[100 + 1];
int cnt = 0;

void DFS(int current_node) {
    if (visited[current_node]) return;
    if (current_node != 1) ++cnt;
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

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= nodes; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < edges; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    DFS(1);

    cout << cnt;

    return 0;
}

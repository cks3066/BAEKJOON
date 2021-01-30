#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void DFS(int visited[], vector<int> graph[],int current_node) {
    if (visited[current_node]) return; 
    visited[current_node] = true;  
    cout << current_node << ' ';
    for (int i = 0; i < graph[current_node].size(); i++) {
        int next_node = graph[current_node][i]; 
        DFS(visited,graph,next_node);  
    }
}

void BFS(int visited[], vector<int> graph[], int start) {
    queue<int> q;  
    q.push(start);  
    visited[start] = true;
    while (!q.empty()) { 
        int current_node = q.front(); 
        q.pop();
        cout << current_node << ' ';
        for (int i = 0; i < graph[current_node].size(); i++) {
            int next_node = graph[current_node][i];
            if (!visited[next_node]) {
                q.push(next_node);
                visited[next_node] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V;

    cin >> N >> M >> V;

    int *visited = new int[N+1];
    vector<int> *graph = new vector<int>[N+1];

    for (int i = 0; i < N + 1; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        int a_node, b_node;
        cin >> a_node >> b_node;
        graph[a_node].push_back(b_node);
        graph[b_node].push_back(a_node);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(visited, graph, V);
    cout << '\n';

    for (int i = 0; i < N + 1; i++) {
        visited[i] = 0;
    }
    BFS(visited, graph, V);
    
    return 0;
}

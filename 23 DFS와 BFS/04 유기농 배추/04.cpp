#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int T, M, N, K;
bool visited[2500];

void DFS(vector<int>* graph, int current_node) {
    if (visited[current_node]) return;
    visited[current_node] = true;
    for (int i = 0; i < graph[current_node].size(); i++) {
        int next_node = graph[current_node][i];
        DFS(graph, next_node);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> M >> N >> K;

        int a[51][51];
        vector<int> graph[2501];
        int cnt = 0;

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                a[n][m] = 0;
            }
        }

        for (int j = 0; j < K; j++) {
            int x, y;
            cin >> x >> y;
            a[y][x] = 1;
        }

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                if (!a[n][m])continue;
                graph[n * M + m].push_back(n * M + m);
                if (m > 0 && a[n][m - 1]) { // 좌
                    graph[n * M + m].push_back(n * M + m - 1);
                }
                if (n > 0 && a[n - 1][m]) { // 상
                    graph[n * M + m].push_back(n * M + m - M);
                }
                if (m < M - 1 && a[n][m + 1]) { // 우
                    graph[n * M + m].push_back(n * M + m + 1);
                }
                if (n < N - 1 && a[n + 1][m]) { // 하
                    graph[n * M + m].push_back(n * M + m + M);
                }
            }
        }

        for (int j = 0; j < N * M; j++) {
            visited[j] = false;
        }

        for (int j = 0; j < N * M; j++) {
            if (!visited[j] && !graph[j].empty()) {
                cnt++;
                DFS(graph, j);
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<int> graph[25*25];
bool visited[25*25];

int num = 0;
void DFS(int current_node) {
    if (visited[current_node]) return;
    num++;
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

    cin >> N;

    string house[25];
    for (int i = 0; i < N; i++) {
        cin >> house[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (house[i][j] == '0') continue;
            graph[i * N + j].push_back(i * N + j);
            if (j > 0 && house[i][j - 1] == '1') { // 좌
                graph[i * N + j].push_back(i * N + j - 1);
            }
            if (i > 0 && house[i - 1][j] == '1') { // 상
                graph[i * N + j].push_back(i * N + j - N);
            }
            if (j < N - 1 && house[i][j + 1] == '1') { // 우
                graph[i * N + j].push_back(i * N + j + 1);
            }
            if (i < N - 1 && house[i + 1][j] == '1') { // 하
                graph[i * N + j].push_back(i * N + j + N);
            }
        }
    }

    for (int j = 0; j < N * N; j++) {
        visited[j] = false;
    }

    vector<int> rst;
    int cnt = 0;
    for (int i = 0; i < N * N; i++) {
        if (!visited[i] && !graph[i].empty()) {
            num = 0;
            cnt++;
            DFS(i);
            rst.push_back(num);
        }
    }

    cout << cnt << '\n';
    sort(rst.begin(), rst.end());
    for (auto k : rst) {
        cout << k << '\n';
    }

    return 0;
}

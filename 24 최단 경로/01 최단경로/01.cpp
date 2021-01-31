#define _CRT_SECURE_NO_WARNINGS
#define INF 1000000000

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>>a[20000+1];
int d[20000+1];

void dijkstra(int start) {
    d[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, start));
    while (!pq.empty()) {
        int current = pq.top().second;
        int distance = -pq.top().first;
        pq.pop();
        if (d[current] < distance) continue;
        for (int i = 0; i < a[current].size(); i++) {
            int next = a[current][i].second;
            int nextDistance = distance + a[current][i].first;
            if (nextDistance < d[next]) {
                d[next] = nextDistance;
                pq.push(make_pair(-nextDistance, next));
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E, K;
    cin >> V >> E;
    cin >> K;

    for (int i = 1; i <= V; i++) {
        d[i] = INF;
    }

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        a[u].push_back(make_pair(w, v));
    }

    dijkstra(K);

    for (int i = 1; i <= V; i++) {
        if (d[i] == INF) cout << "INF\n";
        else
        cout << d[i] << '\n';
    }
    return 0;
}

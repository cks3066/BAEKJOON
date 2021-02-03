#define _CRT_SECURE_NO_WARNINGS
#define MAX 10001

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int V, E;
int id, d[MAX];
bool finished[MAX];
vector<int> a[MAX];
vector<vector<int>> SCC;
stack<int> s;

int DFS(int current_node) {
    d[current_node] = ++id;
    s.push(current_node);

    int parent = d[current_node];
    for (int i = 0; i < a[current_node].size(); i++) {
        int next_node = a[current_node][i];
        if (d[next_node] == 0) parent = min(parent, DFS(next_node));
        else if (!finished[next_node]) parent = min(parent, d[next_node]);
    }
    if (parent == d[current_node]) {
        vector<int> scc;
        while (true) {
            int t = s.top();
            s.pop();
            scc.push_back(t);
            finished[t] = true;
            if (t == current_node) break;
        }
        SCC.push_back(scc);
    }
    return parent;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;

    for (int i = 0; i < E; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }

    for (int i = 1; i <= V; i++) {
        if (d[i] == 0) DFS(i);
    }

    cout << SCC.size() << endl;
    for (int i = 0; i < SCC.size(); i++) {
        sort(SCC[i].begin(), SCC[i].end());
        for (int j = 0; j < SCC[i].size(); j++) {
        }
    }

    sort(SCC.begin(), SCC.end());
    for (int i = 0; i < SCC.size(); i++) {
        for (int j = 0; j < SCC[i].size(); j++) {
            cout << SCC[i][j] << ' ';
        }
        cout << "-1\n";
    }
    return 0;
}

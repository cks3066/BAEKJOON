#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getParent(int parent[], int current_node) {
    if (parent[current_node] == current_node) return current_node; 
    return parent[current_node] = getParent(parent, parent[current_node]);
}

void unionParent(int parent[], int a_node, int b_node) {
    a_node = getParent(parent, a_node);
    b_node = getParent(parent, b_node);
    if (a_node < b_node) parent[b_node] = a_node;
    else parent[a_node] = b_node;
}

bool findParent(int parent[], int a_node, int b_node) {
    a_node = getParent(parent, a_node); 
    b_node = getParent(parent, b_node);
    if (a_node == b_node) return true;
    return false;
}

// 간선 클래스 선언
class Edge {
public:
    int node[2];
    int distance;
    Edge(int a_node, int b_node, int distance) {
        this->node[0] = a_node;
        this->node[1] = b_node;
        this->distance = distance;
    }
    bool operator <(Edge& edge) {
        return this->distance < edge.distance;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E;

    vector<Edge> v;

    cin >> V >> E;

    for (int i = 0; i < E; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        v.push_back(Edge(A, B, C));
    }

    sort(v.begin(), v.end());

    int *parent = new int[V+1];  // Union-Find 사용
    for (int i = 1; i <= V; i++) {
        parent[i] = i;
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        //사이클이 발생하지 않는 경우 그래프에 포함
        if (!findParent(parent, v[i].node[0], v[i].node[1])) {
            sum += v[i].distance;
            unionParent(parent, v[i].node[0], v[i].node[1]);
        }
    }

    cout << sum;

    return 0;
}

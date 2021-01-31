#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int parent[100 + 1];

int getParent(int current_node) {
    if (parent[current_node] == current_node) return current_node;
    return parent[current_node] = getParent(parent[current_node]);
}

void unionParent(int a_node, int b_node) {
    a_node = getParent(a_node);
    b_node = getParent(b_node);
    if (a_node < b_node) parent[b_node] = a_node;
    else parent[a_node] = b_node;
}

bool findParent(int a_node, int b_node) {
    a_node = getParent(a_node); 
    b_node = getParent(b_node); 
    if (a_node == b_node) return true; 
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= nodes; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < edges; i++) {
        int a, b;
        cin >> a >> b;
        unionParent(a, b);
    }

    int cnt = 0;

    for (int i = 2; i <= nodes; i++) {
        if (getParent(i) == 1) cnt++;
    }

    cout << cnt;
    return 0;
}

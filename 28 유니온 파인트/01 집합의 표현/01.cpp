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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int *parent = new int[n+1];
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        bool find;
        int a, b;
        cin >> find >> a >> b;
        if (!find) {
            unionParent(parent, a, b);
        }
        else {
            if (findParent(parent, a, b) == 1) cout << "YES\n";
            else cout << "NO\n";
        }

    }
    return 0;
}

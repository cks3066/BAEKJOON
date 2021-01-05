#define _CRT_SECURE_NO_WARNINGS
#define MAX 8+1

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int lists[MAX];
bool visited[MAX] = { 0, };

void BackTracking(int cnt, int N, int M) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << lists[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {

        if (!visited[i]) {
            lists[cnt] = i;
            BackTracking(cnt + 1, N, M);
        }
    }
}

int main() {
	ios::sync_with_stdio(false);

	int N,M;

	cin >> N >> M;

    BackTracking(0,N, M);

	return 0;
}

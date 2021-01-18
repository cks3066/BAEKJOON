#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int T,N,M;
queue<pair<int,int>> q;
vector<int> v;

bool compare(int a, int b) {
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    int a, b;
    int cnt,index;
    for (int i = 0; i < T; i++) {
        cnt = 0;
        cin >> N >> M;
    
        for (int j = 0; j < N; j++) {
            int input;
            cin >> input;
            q.push({ input, j });
            v.push_back(input);
        }

        sort(v.begin(), v.end(), compare);

        while (true) {
            while (q.front().first != v[cnt]) {
                q.push(q.front());
                q.pop();
            }
            cnt++;
            if (q.front().second == M) {
                cout << cnt << "\n";
                break;
            }
            else {
                q.pop();
                if (q.size() == 0) break;
            }
        }
        
        v.clear();
        while (!q.empty())
        {
            q.pop();
        }
    }

    return 0;
}

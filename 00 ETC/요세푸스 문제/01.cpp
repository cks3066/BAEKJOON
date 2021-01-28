#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> v;
bool visited[MAX];

int main()
{
    cin >> N >> K;

    int index = K;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cnt = 0;
        v.push_back(index);
        visited[index] = true;
        if (i != N - 1) {
            while (cnt != K) {
                index++;
                if (index > N) index -= N;
                if (visited[index] == false)
                    cnt++;
            }
        }
    }

    cout << "<";
    for (int i = 0; i < N - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[N - 1] << ">";
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000+1

#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int A[MAX];

int Find(int start, int end,int key) {
    if (start > end) return 0;

    int mid = (start + end) / 2;

    if (A[mid] == key) {
        return 1;
    }
    else if (A[mid] > key) {
        return Find(start, mid - 1, key);
    }
    else{
        return Find(mid + 1, end,key);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    sort(A + 1, A + N + 1);

    cin >> M;

    for (int i = 1; i <= M; i++) {
        int input;
        cin >> input;
        cout << Find(1,N,input) << "\n";
        
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 500000+1

#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int A[MAX];

int FindLower(int start, int end, int key) {
    int mid;

    while (end > start) {
        mid = (start + end) / 2;
        if (A[mid] >= key)
            end = mid;
        else start = mid + 1;
    }
    return end;
}

int FindUpper(int start, int end, int key) {
    int mid;

    while (end > start) {
        mid = (start + end) / 2;
        if (A[mid] > key)
            end = mid;
        else start = mid + 1;
    }
    return end;
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

    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        int lower = FindLower(1, N, input);
        int upper = FindUpper(1, N, input);
        if (upper == N && input == A[N])
            upper++;
        cout << upper - lower << " ";

    }
    return 0;
}

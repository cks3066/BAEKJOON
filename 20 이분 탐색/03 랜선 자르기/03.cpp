#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000+1

#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
long long int A[MAX];

long long binarySearch(long long start, long long end) {
    long long mid = (start + end) / 2;
    long long sum = 0;

    while (start <= end) {
        sum = 0;
        mid = (start + end) / 2;
        for (int i = 1;i <= K;i++) {
            sum += A[i] / mid;
        }
        if (N > sum) {
            end = mid - 1;
        }
        else if (sum >= N) {
            start = mid + 1;
        }
    }
    return end;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> K >> N;

    long long int sum = 0;
    for (int i = 1; i <= K; i++) {
        cin >> A[i];
        sum += A[1];
    }

    sort(A + 1, A + K + 1);
    cout << binarySearch(1, A[K]);


    return 0;
}


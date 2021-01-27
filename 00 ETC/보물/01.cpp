#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> A, B;

bool compare(int a, int b) {
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        A.push_back(input);
    }

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        B.push_back(input);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i] * B[i];
    }

    cout << sum;
    return 0;
}

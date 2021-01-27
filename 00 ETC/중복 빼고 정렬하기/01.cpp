#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> A;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        A.push_back(input);
    }

    sort(A.begin(), A.end());

    cout << A[0] << " ";
    for (int i = 1; i < A.size(); i++) {
        if(A[i] != A[i-1])
        cout << A[i] << " ";
    }
    return 0;
}

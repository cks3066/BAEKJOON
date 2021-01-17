#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000+1
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;
vector<int> A;
int result[MAX];
stack<int> s;

void NGE(int n) {
    if (n == N) {
        result[n] = -1;
        return; 
    }
    if (A[n] < A[n + 1]) {
        s.push(A[n + 1]);
        result[n] = s.top();
        return;
    }
    if (A[n] >= A[n + 1]) {
        if (s.size() == 0) {
            result[n] = -1;
        }
        else {
            if (A[n] < s.top())
                result[n] = s.top();
            else {
                while (true) {
                    s.pop();
                    if (s.size() == 0) {
                        result[n] = -1;
                        break;
                    }
                    if (A[n] < s.top()) {
                        result[n] = s.top();
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    A.push_back(0);

    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        int input;
        cin >> input;
        A.push_back(input);
    }

    for (int i = N; i >= 1; i--) {
        NGE(i);
    }

    for (int i = 1; i <= N; i++) {
        cout << result[i] << " ";
    }
    return 0;
}

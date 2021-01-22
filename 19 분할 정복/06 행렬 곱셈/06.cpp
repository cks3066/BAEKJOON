#define _CRT_SECURE_NO_WARNINGS
#define MAX 100+1

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M,K;
    int A[MAX][MAX];
    int B[MAX][MAX];

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= K; j++) {
            cin >> B[i][j];
        }
    }

    int result;
    for (int i = 1; i <= N; i++) {
        for (int k = 1; k <= K; k++) {
            result = 0;
            for (int j = 1; j <= M; j++) {
                result += A[i][j] * B[j][k];
            }
            cout << result << " ";
        }
        cout << endl;

    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define mod 1000

#include <iostream>
#include <cstring>

using namespace std;

int N;
int result;
long long int B;
long long int A[6][6];
long long int rst[6][6];
long long int tmp[6][6];

void HJ() {
    for (int i = 1; i <= N; i++) {
        for (int k = 1; k <= N; k++) {
            result = 0;
            for (int j = 1; j <= N; j++) {
                result = ((result%mod) + ((rst[i][j]%mod) * (A[j][k]%mod) % mod))%mod;
            }
            tmp[i][k] = result;
        }
    }
    memcpy(rst, tmp, sizeof(tmp));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    cin >> N >> B;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
        }
    }

    if (B == 1) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cout << A[i][j] % mod << " ";
            }
            cout << endl;
        }

        return 0;
    }

    for (int i = 1; i <= N; i++) {
        for (int k = 1; k <= N; k++) {
            result = 0;
            for (int j = 1; j <= N; j++) {
                result += A[i][j] * A[j][k];
            }
            tmp[i][k] = result % mod;
        }
    }

    if (B == 2) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cout << tmp[i][j] << " ";
            }
            cout << endl;
        }

        return 0;

    }

    memcpy(rst, tmp, sizeof(tmp));

    for (int i = 2; i < B; i++) {
        HJ();
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << rst[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    int arr[MAX];

    cin >> N >> K;

    for (int i = 2; i <= N; i++) {
        arr[i] = i;
    }

    int cnt = 0;
    while (true) {
        for (int i = 2; i <= N; i++) {
            if (arr[i] == -1) continue;
            else {
                int P = arr[i];
                cnt++;
                if (cnt == K) {
                    cout << arr[i];
                    return 0;
                }
                arr[i] = -1;
                for (int j = i; j <= N; j++) {
                    if (arr[j] % P == 0) {
                        cnt++;
                        if (cnt == K) {
                            cout << arr[j];
                            return 0;
                        }
                        arr[j] = -1;
                    }
                }
            }
        }
    }
    return 0;
}

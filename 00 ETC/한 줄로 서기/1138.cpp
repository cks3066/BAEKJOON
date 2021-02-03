#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int a[10 + 1] = { 0, };

    cin >> N;
    for (int i = 1; i <= N; i++) {
        int input;
        cin >> input;
        int cnt = 0;
        int index = 0;
        while (cnt != input) {
            if (!a[index])
                cnt++;
            index++;
        }
        while (a[index])
            index++;
        a[index] = i;
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] << ' ';
    }
    
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
int n,m;

int main()
{
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    int x = n - m + 1;

    int twoCntA = 0;
    int fiveCntA = 0;

    for (int i = n; i >= x; i--) {
        if (i % 2 == 0) {
            int k = i;
            while (k % 2 == 0) {
                twoCntA++;
                k /= 2;
            }
        }
        if (i % 5 == 0) {
            int k = i;
            while (k % 5 == 0) {
                fiveCntA++;
                k /= 5;
            }
        }

    }

    int cntA = min(fiveCntA, twoCntA);

    int twoCntB = 0;
    int fiveCntB = 0;

    for (int i = m; i >= 1; i--) {
        if (i % 2 == 0) {
            int k = i;
            while (k % 2 == 0) {
                twoCntB++;
                k /= 2;
            }
        }
        if (i % 5 == 0) {
            int k = i;
            while (k % 5 == 0) {
                fiveCntB++;
                k /= 5;
            }
        }
    }

    int cntB = min(fiveCntB, twoCntB);

    cout << cntA - cntB;

    return 0;
}

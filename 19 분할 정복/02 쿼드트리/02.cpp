#define _CRT_SECURE_NO_WARNINGS
#define MAX 200

#include <iostream>

using namespace std;

char on[MAX][MAX];

void QuardTree(int row, int col, int size) {

    bool allSame = true;
    char startColor = on[row][col];

    if (size == 1) {
        cout << startColor;
        return;
    }

    for (int i = row; i < row + size; i++) {
        for (int j = col; j < col + size; j++) {
            if (on[i][j] != startColor) {
                allSame = false;
                break;
            }
        }
    }
    if (allSame) {
        cout << startColor;
    }
    else {
        cout << "(";
        QuardTree(row, col, size / 2);
        QuardTree(row, col + size / 2, size / 2);
        QuardTree(row + size / 2, col, size / 2);
        QuardTree(row + size / 2, col + size / 2, size / 2);
        cout << ")";
    }


    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> on[i][j];
        }
    }

    QuardTree(1, 1, N);

    return 0;
}

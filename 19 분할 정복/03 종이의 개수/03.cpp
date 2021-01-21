#define _CRT_SECURE_NO_WARNINGS
#define MAX 5000

#include <iostream>

using namespace std;

int on[MAX][MAX];

int minusOne = 0;
int zero = 0;
int one = 0;

void QuardTree(int row, int col, int size) {

    bool allSame = true;
    int startColor = on[row][col];

    if (size == 1) {
        if (startColor == -1) ++minusOne;
        else if (startColor == 0) ++zero;
        else if (startColor == 1) ++one;

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
        if (startColor == -1) ++minusOne;
        else if (startColor == 0) ++zero;
        else if (startColor == 1) ++one;
    }
    else {
        QuardTree(row, col, size / 3);
        QuardTree(row, col + size / 3, size / 3);
        QuardTree(row, col + ((size / 3) * 2), size / 3);
        QuardTree(row + size / 3, col, size / 3);
        QuardTree(row + size / 3, col + size / 3, size / 3);
        QuardTree(row + size / 3, col + ((size / 3) * 2), size / 3);
        QuardTree(row + ((size / 3)*2), col, size / 3);
        QuardTree(row + ((size / 3) * 2), col + size / 3, size / 3);
        QuardTree(row + ((size / 3) * 2), col + ((size / 3) * 2), size / 3);
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

    cout << minusOne << "\n" << zero << "\n" << one;
    
    return 0;
}

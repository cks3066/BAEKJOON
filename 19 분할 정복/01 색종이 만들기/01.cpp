#define _CRT_SECURE_NO_WARNINGS
#define MAX 200

#include <iostream>

using namespace std;

int papers[MAX][MAX] = { 0 , };
int whiteCnt = 0;
int blueCnt = 0;

void MakePieces(int row, int col,int size) {

    bool allSame = true;
    int startColor = papers[row][col];

    if (size == 1) {
        if (startColor == 0) ++whiteCnt;
        else if (startColor == 1) ++blueCnt;
        
        return;
    }
    for (int i = row; i < row+size; i++) {
        for (int j = col; j < col+size; j++) {
            if (papers[i][j] != startColor) {
                allSame = false;
                break;
            }
        }
    }
    if (allSame) {
        if (startColor == 0) ++whiteCnt;
        else if (startColor == 1) ++blueCnt;
    }
    else {
        MakePieces(row,col,size/2);
        MakePieces(row+size/2,col,size/2);
        MakePieces(row, col + size/2,size/2);
        MakePieces(row + size / 2, col + size/2, size / 2);
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
            cin >> papers[i][j];
        }
    }
    
    MakePieces(1, 1,N);

    cout << whiteCnt << "\n" << blueCnt;
    return 0;
}

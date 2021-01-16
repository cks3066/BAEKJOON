#define _CRT_SECURE_NO_WARNINGS
#define MAX 100+1

#include<iostream>
#include<algorithm>

using namespace std;

int ring[MAX];

int GCD(int a, int b)
{
    if (b == 0) return a;
    else return GCD(b, a % b);
}


int main()
{
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> ring[i];
    }

    for (int i = 2; i <= N; i++) {
        cout << ring[1] / GCD(ring[1],ring[i]) << "/" << ring[i] / GCD(ring[1], ring[i]) << "\n";
    }


    return 0;
}

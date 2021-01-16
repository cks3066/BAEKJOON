#define _CRT_SECURE_NO_WARNINGS
#define MAX 5000

#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int arr[MAX];
int brr[MAX];

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool sear(int* arr, int a, int i, int num)
{
    for (int j = 1; j < num; j++)
    {
        if (arr[j] % i != a)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);


    int igcd = arr[1] - arr[0];
    for (int i = 1; i < N - 1; i++)
    {
        igcd = gcd(igcd, arr[i + 1] - arr[i]);
    }
    int bindex = 0;
    for (int i = 1; i * i <= igcd; i++)
    {
        if (!(igcd % i))
        {
            if (i != 1)
            {
                brr[bindex] = i;
                bindex++;
            }
            if (i != igcd / i)
            {
                brr[bindex] = igcd / i;
                bindex++;
            }

        }
    }
    sort(brr, brr + bindex);

    for (int i = 0; i < bindex; i++)
    {
        cout << brr[i] << ' ';
    }

    return 0;
}

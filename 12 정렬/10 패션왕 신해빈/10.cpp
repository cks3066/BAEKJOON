#define _CRT_SECURE_NO_WARNINGS
#define MAX 30+1

#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int T, N;
string name,type;
vector <pair<string, string>> input;

bool compare(pair<string, string>a, pair<string, string>b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin >> T;

    for (int t = 1; t <= T; t++) {
        cin >> N;
        for (int n = 1; n <= N; n++) {
            cin >> name >> type;
            input.push_back({ name, type });
        }

        sort(input.begin(), input.end(), compare);

        string stand = input[0].second;
        int cnt = 1;
        int result = 1;
        for (auto i : input) {
            if (stand == i.second) {
                cnt++;
            }
            else {
                stand = i.second;
                result *= cnt;
                cnt = 2;
            }
        }
        result *= cnt;

        cout << result - 1 << endl;;

        input.clear();
    }

    return 0;
}

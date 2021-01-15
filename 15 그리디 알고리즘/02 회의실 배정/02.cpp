#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) 
		return a.first < b.first;
	return a.second < b.second;
}


int main() {
	ios::sync_with_stdio(false);

	int N,start,finish;
	vector< pair<int, int> > timeTable;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> start >> finish;
		timeTable.push_back({ start, finish });
	}

	sort(timeTable.begin(), timeTable.end(), compare);

	int time = timeTable[0].second;
	int cnt = 1;
	for (int i = 1;i < N;i++)
	{
		if (time <= timeTable[i].first)
		{
			time = timeTable[i].second;
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}

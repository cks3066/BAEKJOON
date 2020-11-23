#include <iostream>
#include <cassert>

using namespace std;

int main() {
	int N;

	cin >> N;
	assert(N >= 2 && N <= 50);

	int **people = new int*[N];
	for (int i = 0; i < N; i++)
		people[i] = new int[3];
	
	for (int i = 0; i < N; i++) {
		cin >> people[i][0] >> people[i][1];
		people[i][2] = 1;
		assert(people[i][0] >= 10 && people[i][0] <= 200);
		assert(people[i][1] >= 10 && people[i][1] <= 200);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (people[i][0] < people[j][0] && people[i][1] < people[j][1]) {
				people[i][2]++;
			}

		}
		cout << people[i][2] << " ";
	}


	for (int i = 0; i < N; i++)
		delete[] people[i]; 
	delete[] people;

	return 0;
}

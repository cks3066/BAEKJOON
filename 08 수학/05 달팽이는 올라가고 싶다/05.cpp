#include <iostream>

using namespace std;

int main() {
	int A, B, V;
	long int previousDay;

	cin >> A >> B >> V;

	
	previousDay = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		previousDay++;

	cout << ++previousDay;

	return 0;
}

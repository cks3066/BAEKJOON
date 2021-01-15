#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);


	int A,B;
	int check ;

	while (true) {
		cin >> A >> B;

		check = 0;
		if (A == 0 && B == 0) return 0;
		if (A > B && A % B == 0) check = 2;
		else if(A < B&& B% A == 0) check = 1;

		switch (check) {
		case 0:
			cout << "neither\n";
			break;
		case 1:
			cout << "factor\n";
			break;
		case 2:
			cout << "multiple\n";
			break;
		}
	}

	return 0;
}

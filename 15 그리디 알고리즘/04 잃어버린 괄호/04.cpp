#define _CRT_SECURE_NO_WARNINGS
#define MAX 50+1

#include <iostream>
#include <cstring>
#include <cstdlib> 

using namespace std;

char input[MAX];

int main() {
	ios::sync_with_stdio(false);

	cin >> input;

	char temp[MAX];
	int number[MAX];
	char op[MAX];

	int cnt = 0;
	int index = 0;
	for (int i = 0; i < strlen(input); i++) {
		if ((int)input[i] >= 48 && (int)input[i] <= 57) {
			temp[cnt++] = input[i];
		}
		else {
			number[index++] = atoi(temp);
			op[index] = input[i];
			memset(temp, 0, sizeof(temp));
			cnt = 0;
		}
	}
	number[index] = atoi(temp);

	int sum = number[0];
	int tmp = 0;
	bool check = false;
	for (int i = 1; i <= index; i++) {
		if (check == false) {
			if ((int)op[i] == 45) {
				tmp += number[i];
				check = true;
			}
			else {
				sum += number[i];
			}
		}
		else {
			if ((int)op[i] == 45) {
				sum -= tmp;
				tmp = 0;
				i--;
				check = false;
			}
			else {
				tmp += number[i];
			}
		}
	}
	sum -= tmp;
	cout << sum;

	return 0;
}

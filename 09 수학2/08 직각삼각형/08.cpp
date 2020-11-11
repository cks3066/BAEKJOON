#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool checkRightTriangle(int a, int b, int c) {
    int max, tm1, tm2;

    if (a >= b && a >= c) { max = a; tm1 = b; tm2 = c; }
    else if (b >= a && b >= c) { max = b; tm1 =a; tm2 = c;}
    else if (c >= a && c >= b) { max = c; tm1 = a; tm2 = b; }

    if (max*max == tm1 * tm1 + tm2 * tm2)
        return true;
    else
        return false;
}

int main() {
    int input[3];

    while (true)
    {
        cin >> input[0] >> input[1] >> input[2];

        if (input[0] == 0 && input[1] == 0 && input[2] == 0)
            break;
        if (checkRightTriangle(input[0], input[1], input[2]) == true)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;

    }

	return 0;
}

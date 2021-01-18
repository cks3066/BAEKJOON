#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000+1

#include <deque>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

int T;
deque<int> dq;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    cin >> T;

    for (int i = 0; i < T; i++) {
        char tmp[MAX];
        bool check = true;
        int index = 0;
        string p;
        int n;

        cin >> p;
        cin >> n;
        //덱에 숫자 넣기
        while (true) {
            char c;
            cin >> c;
            // '['면 넘어감
            if (c == '[') continue;
            // ']'면 while문 종료, tmp 에 담긴 숫자 atoi로 덱에 저장
            else if (c == ']') {
                dq.push_back(atoi(tmp));
                memset(tmp, 0, sizeof(tmp));
                break;
            }
            // ','면 tmp에 담긴 숫자 atoi로 저장, 
            // tmp 재사용을 위해 index 0으로 설정, memset으로 비워줌
            else if (c == ',') {
                dq.push_back(atoi(tmp));
                index = 0;
                memset(tmp, 0, sizeof(tmp));
            }
            else {
                tmp[index++] = c;
            }
        }

        bool r = false; //reverse 상태
        for (int j = 0; j < p.length(); j++) {
            if (dq.size() == 0) {
                check = false;
                break;
            }
            if (p[j] == 'R') {
                r = !r;
            }
            else if (p[j] == 'D') {
                // D로 인해 사라진 빈 덱 걸러줌
                if (dq.size() == 0) {
                    check = false;
                    break;
                }
                // [] 같은 입력을 걸러줌
                if (dq.size() == 1 && dq.front() == 0) {
                    check = false;
                    break;
                } 
                if (!r) {
                    dq.pop_front();
                }
                else {
                    dq.pop_back();
                }
            }
        }

        deque<int> ::reverse_iterator riter;

        if (check == true) {
            //입력시 []로 입력받은 경우 R을 거쳐서옴
            if (dq.size() != 0 && dq.front() == 0)
                cout << "[]\n";
            //D로 모든 원소가 지워진 경우
            else if (dq.size() == 0) {
                cout << "[]\n";
            }
            // 덱 출력(non reverse)
            else if (r == false) {
                cout << "[" << dq.front();
                dq.pop_front();
                for (auto i : dq) {
                    cout << "," << i;
                }
                cout << "]\n";
            }
            else {
            // 덱 출력(reverse)
                cout << "[" << dq.back();
                dq.pop_back();
                for (riter = dq.rbegin(); riter != dq.rend(); ++riter) {
                    cout << "," << *riter;
                }
                cout << "]\n";
            }
        }
        else
            // 에러케이스
            cout << "error\n";

        dq.clear();
    }
    return 0;
}

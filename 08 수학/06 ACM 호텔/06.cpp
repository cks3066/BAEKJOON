#include <iostream>

using namespace std;

int main() {
	int T = 0, H, W, N, quot, remain, h,w;
	int** hotel;

	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> H >> W >> N;

		hotel = (int**)malloc(sizeof(int*) * H);
		for (int i = 0; i < H; i++) {
			hotel[i] = (int*)malloc(sizeof(int) * W);
		}

		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				hotel[i][j] = (i + 1) * 100 + (j + 1);
			}
		}
		

		// 나머지가 행
		// 몫이 열
		remain = N % H;
		quot = N / H;
		
		if (N <= H) {
			h = N - 1;
		}
		else if (remain == 0) {
			h = H - 1;
		}
		else {
			h = remain - 1;
		}

		if (N == H) {
			w = 0;
		}
		else{ 
			w = quot; 
		}
		if (remain == 0) {
			w = quot - 1;
		}


		cout << hotel[h][w]<< endl;
	
	}

	return 0;
}

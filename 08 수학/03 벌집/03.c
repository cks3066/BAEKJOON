#include <stdio.h>

int main(void){
	long long unsigned int n;
	long long unsigned int m;
	scanf("%llu", &n);
	n += 4;
	n /= 6;
	for(long long unsigned int i = 0;i < 100000000;i++){
		m = i*(i+1)/2;
		if(n <= m){
			printf("%llu", i+1);
			break;
		}
	}
	return 0;
}

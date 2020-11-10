#include<stdio.h>
#include<queue>

using namespace std;

int square(int n){
    long long int temp=1;
    int count=0;
    while(1){
        if(temp*temp>n){
            break;
        }
        count++;
        temp++;
    }
    return count;
}

int main(){
    long long int T,X,Y,D,temp;
    int N=0;
    scanf("%i",&T);
    for(int x=0;x<T;x++){
        scanf("%i%i",&X,&Y);
        D=Y-X;
        temp=square(D);
        N=2*temp-1;
        D=D-temp*temp;
        if(D>0 && D<=temp){
            N++;
        }
        if(D>temp && D<2*temp+1){
            N+=2;
        }
        printf("%i\n",N);
    }
}

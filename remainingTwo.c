#include<stdio.h>

int main(){
    int N,i;
    scanf("%d",&N);
    if(N<1000){
        for(i = 2;i<1000;i++){
        if(i%N == 2){
            printf("%d\n",i);
        }
    }
    }
    return 0;
}

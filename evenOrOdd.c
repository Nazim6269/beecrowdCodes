#include<stdio.h>

int main(){
    int N,i;
    scanf("%d",&N);
    int ara[N];
    for(i = 0;i<N;i++){
        scanf("%d",&ara[i]);
    }
    for(i = 0;i<N;i++){
        if(ara[i]<0 && ara[i]%2 != 0){
            printf("ODD NEGATIVE\n");
        }
        else if(ara[i]>0 && ara[i]%2 != 0){
            printf("ODD POSITIVE\n");
        }
        else if(ara[i] == 0){
            printf("NULL\n");
        }
        else if(ara[i]>0 && ara[i]%2 == 0){
            printf("EVEN POSITIVE\n");
        }
        else if(ara[i]<0 && ara[i]%2 == 0){
            printf("EVEN NEGATIVE\n");
        }
    }
    return 0;
}


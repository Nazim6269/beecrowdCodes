#include<stdio.h>

int main(){
    int N,i,count = 0,count_1 = 0;
    scanf("%d",&N);
    int ara[N];
    for(i = 0;i<N;i++){
        scanf("%d",&ara[i]);
    }
    for(i = 0;i<N;i++){
        if(ara[i] >= 10 && ara[i] <= 20){
            count++;
        }
        else{
            count_1++;
        }
    }
     printf("%d in\n%d out\n",count,count_1);
    return 0;
}

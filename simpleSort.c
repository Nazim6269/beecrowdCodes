#include<stdio.h>

int main(){
    int i,ara[3],ara_1[3];
    int temp;
    int count = 0;
    for(i = 0;i<3;i++){
        scanf("%d",&ara[i]);
        ara_1[i] = ara[i];
    }
    for(i = 0;i<2;i++){
        if(ara[i] > ara[i+1]){
            temp = ara[i+1];
            ara[i+1] = ara[i];
            ara[i] = temp;
            count++;
        }
        if(count>0){
            i = -1;
            count = 0;
        }
    }
    for(i = 0;i<3;i++){
        printf("%d\n",ara[i]);
    }
    printf("\n");
    for(i = 0;i<3;i++){
        printf("%d\n",ara_1[i]);
    }

    return 0;
}

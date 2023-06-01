#include<stdio.h>

int main(){
    float ara[5];
    int i,count = 0;
    for(i = 0;i<6;i++){
        scanf("%f",&ara[i]);
    }
    for(i = 0;i<6;i++){
        if(ara[i]>0)
        {
            count++;
       }
    }
    printf("%d valores positivos\n",count);
    return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
    float ara[5],sum = 0;
    int i,count = 0;
    for(i = 0;i<6;i++){
        scanf("%f",&ara[i]);
    }
    for(i = 0;i<6;i++){
        if(ara[i]>0)
        {
            count++;
            sum = sum + ara[i];
       }
    }
    float avg = sum / count ;
    printf("%d valores positivos\n%.1f\n",count,avg);
    return 0;
}


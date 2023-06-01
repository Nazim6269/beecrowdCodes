#include<stdio.h>

int main(){
    int N,ara[3],ara_1[3],ara_2[3],i,j;
    scanf("%d",&N);
    for(j=1;j<=N;j++){
        for(i=0;i<=2;i++){
        scanf("%f%f%f",&ara[i],&ara_1[i],&ara_2[i]);
    }
    }
    float avg = (ara[0]*2 + ara_1[0]*3 + ara_2[0]*5)/10;
    float avg_1 = (ara[1]*2 + ara_1[1]*3 + ara_2[1]*5)/10;
    float avg_2 = (ara[2]*2 + ara_1[2]*3 + ara_2[2]*5)/10;
    printf("%.1f\n%.1f\n%.1f\n",avg,avg_1,avg_2);

    return 0;
}

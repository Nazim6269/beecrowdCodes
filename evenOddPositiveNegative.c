#include<stdio.h>

int main(){
    int ara[4];
    int i,count = 0,count_1 = 0,count_2 = 0,count_3 = 0;
    for(i = 0;i<5;i++){
        scanf("%d",&ara[i]);
    }
    for(i = 0;i<5;i++){
        if(ara[i]%2 == 0)
        {
            count++;
       }
       else{
        count_1++;
       }
    }
    for(i = 0;i<5;i++){
        if(ara[i]>0)
        {
            count_2++;
       }
       else if(ara[i]<0){
        count_3++;
       }
    }
     printf("%d valor(es) par(es)\n",count);
     printf("%d valor(es) impar(es)\n",count_1);
     printf("%d valor(es) positivo(s)\n",count_2);
     printf("%d valor(es) negativo(s)\n",count_3);

    return 0;
}


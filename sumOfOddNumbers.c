#include<stdio.h>

int main(){
    int X,Y,ara[100],i,sum = 0;
    scanf("%d%d",&X,&Y);
    if(X>Y){
        for(i = 0;i<(X - Y - 2);i++){
            ara[100] = Y + 1;
            Y = Y + 1;
        }

        for(i = 0;i<(X - Y - 2);i++){
            if(ara[i]%2 != 0){
                sum = sum + ara[i];
            }
        }
         printf("%d\n",sum);
    }
    else if(X<Y){
        for(i = 0;i<(Y - X - 2);i++){
            ara[100] = X + 1;
        }
        for(i = 0;i<(Y - X - 2);i++){
            if(ara[i]%2 != 0){
                sum = sum + ara[i];
            }
        }
        printf("%d\n",sum);
    }
    else{
        printf("%d\n",(X - Y));
    }
    return 0;
}

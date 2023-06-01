#include<stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    if(X%2 == 0){
    for(int i = 1;i<=6;i++){
        printf("%d\n",(X + 1));
        X = X + 2;
    }
    }
    else{
        for(int i= 1;i<=6;i++){
            printf("%d\n",X);
            X = X + 2;
        }
    }
    return 0;
}

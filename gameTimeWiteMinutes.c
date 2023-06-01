#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<c && d>b){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c - a),(d - b));
    }
    else if(c - d == 0 && d - b ==0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a<c && d<b){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c - a)-1,60-(b - d));
    }
    else if(a<c && b == d){
        printf("O JOGO DUROU HORA(S) E %d 0 MINUTO(S)\n",(c - a));
    }
    return 0;
}

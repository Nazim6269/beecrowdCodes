#include<stdio.h>

int main(){
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	double ara[3];
    ara[0] = A;
    ara[1] = B;
    ara[2] = C;
    double temp;
    int count = 0;
    int i;
    for(i = 0;i<2;i++){
        if(ara[i] < ara[i+1]){
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
    A = ara[0];
    B = ara[1];
    C = ara[2];
    if(A >= B+C){
		printf("NAO FORMA TRIANGULO\n");
    }
    if(A*A == B*B + C*C){
		printf("TRIANGULO RETANGULO\n");
    }
    if(A*A > B*B + C*C){
		printf("TRIANGULO OBTUSANGULO\n");
    }
    if(A*A < B*B + C*C){
		printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && B == C){
		printf("TRIANGULO EQUILATERO\n");
    }
    if((A == B && A!= C) || (B == C && B!= A) || (C == A && C!= B)){
		printf("TRIANGULO ISOSCELES\n");
    }
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
    int i,m,m_number,t_bazar,sum=0,sum_1=0,ara[15],ara_1[15];
    float m_rate;
    printf("Enter Person Number: ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("Enter Meal Numbers of Person %d:",i+1);
        scanf("%d",&m_number);
        ara[i] = m_number;
        sum = sum + m_number;
        printf("Enter Total Bazar of Person %d:",i+1);
        scanf("%d",&t_bazar);
        ara_1[i] = t_bazar;
        sum_1 =sum_1 + t_bazar;
    }
    m_rate =(float)sum_1/sum;
    printf("Total Meals = %d\nTotal Bazar = %d\n",sum,sum_1);
    printf("Meal Rate : %.2f\n",m_rate);
    for(i=0;i<m;i++){
        printf("Cost of Person %d = %.2f\n",i+1,round((m_rate*ara[i]) - ara_1[i]));
    }
    return 0;
}

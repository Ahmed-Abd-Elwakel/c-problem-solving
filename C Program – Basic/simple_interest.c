//Where P is the principal amount, T is the time, and, R is the interest rate.
//Calculate aimple interest

#include <stdio.h>

float Reuslt,P,T,R;

int main()
{
    printf("Enter the principal amount : ");
    scanf("%f",&P);
    printf("Enter the time : ");
    scanf("%f",&T);
    printf("Enter the interest rate : ");
    scanf("%f",&R);

    Reuslt = (P*T*R)/100;

    printf("The Simple Interest is : %0.3f\n",Reuslt);

    return 0;
}
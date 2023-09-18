//C program to Check Whether a Number is Positive or Negative or Zero
#include <stdio.h>

void CheckPosOrNeg(int N);

signed int Num1;

int main()
{
    printf("\nPLease Enter Number :");
    scanf("%d",&Num1);

    CheckPosOrNeg(Num1);

    return 0;
}

void CheckPosOrNeg(int N){

    if(N<0) printf("%d is a Negative Number\n",N);
    if(N>0) printf("%d is a Positive Number\n",N);
    if(N==0) printf("%d is a Zero Number\n",N);
}
//C Program – Even or Odd Number
#include <stdio.h>

void CheckEvenOdd(int N);

unsigned int Num1;

int main()
{
    printf("\n\nPLease Enter Number :");
    scanf("%d",&Num1);

    CheckEvenOdd(Num1);

    return 0;
}

void CheckEvenOdd(int N){

    if(N == 0 || N%2==0)  printf("%d is EVEN Number\n",N);
    else printf("%d is ODD Number\n",N);

}
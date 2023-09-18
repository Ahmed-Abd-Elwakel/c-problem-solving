//C Program to print the Fibonacci series using recursion
#include <stdio.h>

unsigned int N,first=0,second=1;
unsigned int result;


int main()
{
printf("Please enter the number of iterations : ");
scanf("%d",&N);

for (int i =0 ; i<=N ; i++){
    printf("%d   ",first);
    result = first + second ; 
    first = second;
    second = result ;
}

    return 0;
}

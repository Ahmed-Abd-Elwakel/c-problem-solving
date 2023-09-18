//C Program to Calculate Sum of Natural Numbers 
#include<stdio.h>

unsigned int Summing(int N);
unsigned int Number = 10;

int main()
{
    int Result = Summing(Number);
    printf("Result : %d\n",Result);

    return 0;
}

unsigned int Summing(int N){

    int sum = 0;
    for(int i = 0 ; i <= N ; i++){
        sum += i;
    }
    return sum;
}
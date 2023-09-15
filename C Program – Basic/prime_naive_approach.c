// C Program to check for prime number using Naive Approach

#include<stdio.h>

    unsigned int Number;
    void CheckPrime(int N);

int main()
{
    printf("plaese Enter A Number :");
    scanf("%d",&Number);
    CheckPrime(Number);

    return 0;
}

void CheckPrime(int N){

    unsigned int Error_RetVal = 1 ;

    for(int i = 2 ; i <= N / 2 ; i++){
        if(N%i == 0){
            Error_RetVal = 0;
            break;
        }

    }
    if(Error_RetVal) printf("%d is a prime number \n",N);
    else printf("%d not a prime number \n",N);
}
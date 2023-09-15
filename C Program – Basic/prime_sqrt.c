// C program to check if a number is prime using sqrt(n)


#include<stdio.h>
#include<math.h>
void CheckPrime(unsigned int N);
unsigned int Number;
int main()
{

    printf("plaese Enter A Number :");
    scanf("%d",&Number);
    CheckPrime(Number);

    return 0;
}

void CheckPrime(unsigned int N){

    unsigned int Error_RetVal = 1 ;
    
    for(int i =2 ; i <= sqrt(N) ; i++){
        if(N % i == 0){
            Error_RetVal = 0;
            break;
        }

    }
    if(Error_RetVal)  printf("%d is a prime number\n",N);
    else printf("%d not a prime number \n",N);
}
#include <stdio.h>
#include <math.h>
unsigned int isPrime(int N);

unsigned int N=300;

int main()
{
    for(int i = 2 ; i<=N ; i++){
        if(isPrime(i)){
            printf("%d\t",i);
        }
    }
    

    return 0;
}

unsigned int isPrime(int N){
  int Error_RetVal = 1 ;
  
    if(N<=1){
        Error_RetVal = 0;
        return Error_RetVal;
    }
    for(int i=2 ; i <= N/2 ; i++){
        if(N%i == 0){
            Error_RetVal = 0;
            break;
        }

    }
    return Error_RetVal;
}







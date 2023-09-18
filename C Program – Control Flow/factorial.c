//C Program to Find Factorial of a Number
#include <stdio.h>

unsigned int Number = 4 ;

int main()
{
    unsigned int Result = 1;
for(int i = 1 ; i<=Number ; i++){
    Result = Result * i ;
}
    printf("Factorial of %d : %d\n",Number,Result);
    return 0;
}
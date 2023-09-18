//C Program to Check Armstrong Number
#include <stdio.h>
#include <math.h>

unsigned int Number,count = 0 ;
unsigned int P = 0;
unsigned int Temp  ;

int main()
{
    printf("Enter Number :");
    scanf("%d",&Number);

    Temp = Number ;

//to get number of digit in variable = count;
    while (Number != 0) {
        Number = Number / 10; // Divide the number by 10
        count++; // Increment the count for each division
    }

    Number = Temp ;

    while (Number > 0) {
    int rem = Number  % 10;
    P = (P) + (pow(rem, count));
    Number /=10 ;
    }

    if(Temp == P) printf("Yes , This Number %d is an Armstrong Number \n",Temp);
    else printf("No , This Number %d NOT an Armstrong Number \n",Temp);

    return 0;
}
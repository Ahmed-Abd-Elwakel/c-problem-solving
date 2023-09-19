//C program to print a reverse number
#include <stdio.h>

int main()
{
    unsigned int Number=0,count=0;
    unsigned int Digits[10];

    printf("Enter The Number : ");
    scanf("%d",&Number);

    while (Number != 0) {
        int Digit = Number % 10;
        Digits[count] = Digit;
        count++;
        Number = Number/10;

    }
    for(int i = 0 ; i <= count-1 ; i++){
        printf("%d",Digits[i]);
    }

    return 0;
}

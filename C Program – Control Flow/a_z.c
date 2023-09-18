//C Program to Print Alphabets From A to Z Using Loop

#include <stdio.h>

int main()
{

int k = 97 ;

    for(int i = 65 ; i <= 90 ; i++){
    printf("%c ",i);
    printf("%c\t",k);
    k++;
    }
    return 0;
}
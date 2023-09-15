//C Program to Print Your Own Name 

#include <stdio.h>


int main()
{
 
    char Name[20];

    printf("please enter your name : ");
        // Use the %[^\n] format specifier to read the whole line until Enter (newline).
    scanf(" %[^\n]", Name);


    printf("your name : %s\n",Name);


    return 0;
}
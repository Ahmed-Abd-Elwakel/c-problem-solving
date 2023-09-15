// C program to multiply two
// floating point numbers


#include <stdio.h>

void Multiplication(float  x, float y);
float num1,num2;
int main()
{
    printf("plaese Enter two Number :");
    scanf("%f%f",&num1,&num2);
    
    Multiplication(num1,num2);
    
    return 0;
}

void Multiplication(float  x, float y){
    printf("%0.3f * %0.3f = %0.3f \n",x,y,x*y);
}
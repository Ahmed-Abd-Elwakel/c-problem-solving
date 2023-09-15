// C Program to convert
// Fahrenheit to Celsius
//c=(f-32)*(5/9)
#include <stdio.h>

void FehrToCell(float fehr,float cell);
float fehr,cell;

int main()
{
    printf("Please Enter temprature in Fahrenheit :");
    scanf("%f",&fehr);

    FehrToCell(fehr, cell);

    return 0;
}

void FehrToCell(float fehr,float cell){

    cell = (fehr - 32.0)*(5.0/9.0) ;
    printf("The Temprature in celsius = %0.3f\n",cell);
}
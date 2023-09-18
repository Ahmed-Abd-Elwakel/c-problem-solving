//C Program to Make a Simple Calculator 

#include <stdio.h>

int x=1;
float num_1=20,num_2=15;
float Calculator(int x, float num_1, float num_2);

int main()
{
printf("1  -->  ADDITION \n2  -->  SUBTRACTION\n3  -->  MULTIPLICATION\n4  -->  DIVISION \n");
printf("Please enter operation : ");
scanf(" %d",&x);

if(Calculator(x,num_1,num_2)==0){
    printf("YOU ENTERED WRONG CHOICE !!!\n");
}
else {

printf("Please First number : ");
scanf("%f",&num_1);
printf("Please second number : ");
scanf("%f",&num_2);
float Result = Calculator(x,num_1,num_2);
printf("Result = %0.3f\n",Result);
}
  return 0;
}

float Calculator(int x, float num_1, float num_2){
    switch (x) {
    case 1: return (num_1+num_2);
                break;
    case 2: return (num_1-num_2);
                break;
    case 3: return (num_1*num_2);
                break;
    case 4: return (num_1/num_2);
                break;
    default: return 0;
            break;
    }
}
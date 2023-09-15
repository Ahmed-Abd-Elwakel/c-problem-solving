// C program to swap two variables
#include<stdio.h>

void Swapping(int x,int y);
unsigned int num1,num2;
int main()
{
    printf("plaese Enter num_1 :");
    scanf("%d",&num1);
    printf("plaese Enter num_2 :");
    scanf("%d",&num2);
    printf("num_1 = %d\tnum_2 = %d\n",num1,num2);
    Swapping(num1, num2);
    return 0;
}
void Swapping(int x,int y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    printf("num_1 = %d\tnum_2 = %d\n",x,y);

}
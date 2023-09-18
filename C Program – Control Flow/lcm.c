// C program to find LCM of
// two numbers
#include <stdio.h>

unsigned int  Num_1,Num_2,Max;

int main()
{
    printf("Please Enter Two Number :");
    scanf("%d%d",&Num_1,&Num_2);

    Max = (Num_1>Num_2)? Num_1:Num_2 ;

    while(1){
        if(Max % Num_1 == 0 && Max % Num_2 == 0){
            printf("LCM Of (%d,%d) is (%d)\n",Num_1,Num_2,Max);
            break;
        }
        ++Max;
    }
    return 0;
}
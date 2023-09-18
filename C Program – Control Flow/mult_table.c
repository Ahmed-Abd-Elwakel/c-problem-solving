//C Program to Generate Multiplication Table 
#include<stdio.h>

int main()
{
int i , k ;
for(i=1 ; i<=12 ; i++){
    for(k=1 ; k<=12 ; k++){
        printf("%d * %d = %d\n",i,k,i*k);
    }
    printf("=========\n");
}

    return 0;
}
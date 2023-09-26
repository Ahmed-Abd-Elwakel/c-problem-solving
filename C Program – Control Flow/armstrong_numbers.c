// C Program to Display Armstrong
// numbers between 1 to 1000
#include <stdio.h>
#include <math.h>
#define START 1
#define END 1000

unsigned int i;

int main()
{
for(i=START ; i<=END ; i++){
    unsigned int Number = i ;
    unsigned int Temp = Number  ;
    unsigned int P = 0,count = 0;

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

    if(Temp == P) printf(" %d\t",Temp);
    

}

    
    return 0;
}
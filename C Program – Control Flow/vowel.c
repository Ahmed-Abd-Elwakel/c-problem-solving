//C Program to Check Whether a Character is Vowel or Consonant 
#include<stdio.h>

unsigned int CheckVowelOrConsonant(char N);
unsigned int CheckVowelOrConsonant_V2(char N);

char ch;

int main()
{
    printf("Please enter the character : ");
    scanf(" %c",&ch);
//here i called the function1 by using if condition
    if(CheckVowelOrConsonant(ch)==1) printf("Vowel Character");
    else printf("Consonant Character");

    return 0;
}
//function1 by using if condition
unsigned int CheckVowelOrConsonant(char N){
    unsigned int Error_RetVal = 0;

    if(N=='A'||N=='E'||N=='O'||N=='I'||N=='U'||N=='a'||N=='e'||N=='i'||N=='o'||N=='u'){
        Error_RetVal = 1;

    }
    return Error_RetVal;
}
//Another Solution
//function2 by using switch case
unsigned int CheckVowelOrConsonant_V2(char N){
    unsigned int Error_RetVal = 0;

    switch (N) {
    case 'A':
    case 'I':
    case 'E':
    case 'O':
    case 'U':
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        Error_RetVal = 1;
    }
    return Error_RetVal;

}
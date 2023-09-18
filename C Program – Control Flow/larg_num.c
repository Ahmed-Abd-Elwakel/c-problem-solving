//C Program to Find Largest Number Among Three Numbers
#include <stdio.h>

void LargestNumber(int x, int y, int z);

unsigned int Num_1, Num_2, Num_3;

int main() {
	printf("please enter three numbers :");
	scanf("%d%d%d", &Num_1, &Num_2, &Num_3);

	LargestNumber(Num_1, Num_2, Num_3);

	return 0;
}

void LargestNumber(int x, int y, int z) {
	if (x > y) {
		if (x > z) {
			printf("%d is the Largest Number\n", x);
		} else {
			printf("%d is the Largest Number\n", z);
		}
	} else if (y > z) {
		printf("%d is the Largest Number\n", y);

	} else {
		printf("%d is the Largest Number\n", z);

	}
}

//Another solution to this program
void LargestNumber_V2(int x, int y, int z) {
    unsigned int Max = 0;
    Max = x;
    if(y>Max) Max = y;
    if(z>Max) Max = z; 
    printf("%d is the Max Number\n",Max); 
}

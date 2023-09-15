// C program to demonstrate
// addition of complex numbers

#include <stdio.h>

float real_1,real_2,img_1,img_2,sum_real,sum_img;
int main()
{
    printf("Enter real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &real_1, &img_1);

    printf("Enter real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &real_2, &img_2);

    sum_real = real_1 + real_2;
    sum_img = img_1 + img_2 ;

    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum_real, sum_img);


    return 0;
}
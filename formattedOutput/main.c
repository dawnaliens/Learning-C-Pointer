#include<stdio.h>

int main()
{
    float p1 = 3.141592;
    double p2 = 3.14159265358979323;

    char letter = 'R';
    int negative = -5;
    unsigned int age = 23;
    
    printf("R's numeric value is %d\n", letter);
    printf("-5 as hex is %x\n", negative);
    printf("-5 as an unsigned int is %u\n", negative);
    printf("My age as a letter is %c\n", age);

    printf("p1:\t decimal floating point = %f\n", p1);
    printf("\t scientific notation = %e\n", p1);
    printf("\t 100 pi = %e\n", p1 * 100);
    printf("\t 10 decimal places = %.10f\n", p1);
    printf("p2:\t default decimal places = %f\n", p2);
    printf("\t 10 decimal places = %.10f\n", p2);
}
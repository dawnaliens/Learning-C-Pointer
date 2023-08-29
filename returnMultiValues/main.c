#include <stdio.h>

void getNum(double *num1, double *num2)
{
    printf("num1 = %p, num2 = %p\n", (void*)num1, (void*)num2);
    printf("&num1 = %p, &num2 = %p\n", (void*)&num1, (void*)&num2);

    *num1 = 23.0;
    *num2 = 45.0;
}

int main(void)
{
    double number1; 
    double number2;
    // output the address of num1, num2
    printf("&number1 = %p, &number2 = %p\n", (void*)&number1, (void*)&number2);

    //Call the function getNum
    getNum(&number1, &number2);
    printf("num1 = %f, num2 = %f\n", number1, number2);

    number1 = 100;
    number2 = 200;
    printf("number1 = %f, num2 = %f\n", number1, number2);
    return 0;
}
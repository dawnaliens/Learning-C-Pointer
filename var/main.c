#include<stdio.h>

int main(void)
{
    printf("Bool - %d bytes\n", sizeof(_Bool));
    printf("Char - %d bytes\n", sizeof(char));
    printf("Short - %d bytes\n", sizeof(short));
    printf("Int - %d bytes\n", sizeof(int));
    printf("Long - %d bytes\n", sizeof(long));
    printf("Long Long - %d bytes\n", sizeof(long long));
    printf("Float - %d bytes\n", sizeof(float));
    printf("Double - %d bytes\n", sizeof(double));
    printf("Long Double - %d bytes\n", sizeof(long double));
    printf("Pointer - %d bytes\n", sizeof(int*));
}
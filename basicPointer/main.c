#include <stdio.h>

int main(void)
{
    int num = 5;
    int another = 10;
    int *numPtr;

    printf("&num - %p\n", (void*)&num);
    printf("&another - %p\n", (void*)&another);
    printf("&numPtr - %p\n", (void*)&numPtr);

    // Assign the address of num to numPtr
    numPtr = &num;
    printf("numPtr - %p\n", (void*)numPtr);

    printf("*numPtr - %d\n", *numPtr);

    // Modify the value of num via numPtr
    *numPtr = 100;
    printf("num - %d\n", num);
    printf("The address of num is %p\n", (void*)&num);
    printf("The address of numPtr is %p\n", (void*)&numPtr);
    return 0;
}
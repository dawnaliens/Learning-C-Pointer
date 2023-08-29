#include <stdio.h>

int main(void)
{
    int number;
    int *numberPtr;

    numberPtr = &number;
    // Output value of numberPtr
    printf("numberPtr - %p\n", (void*)numberPtr);
    numberPtr++;
    printf("numberPtr - %p\n", (void*)numberPtr);

    // Add 3
    printf("numberPtr - %p\n", (void*)(numberPtr + 3));

    return 0;
}
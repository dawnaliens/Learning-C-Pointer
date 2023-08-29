#include <stdio.h>

int main(void) 
{
    int array[5];
    int *ptr;
    int i;

    for (i = 0; i < 5; i++){
        array[i] = i;
    }

    for(ptr = &array[0]; ptr != &array[5]; ptr++){
        printf("%d\n", *ptr);
    }
    return 0;

}
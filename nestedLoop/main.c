#include<stdio.h>

void function(int a, int b){
    while(a < b){
        printf("a = %d, b = %d\n", a, b);
        if (a % 2 == 0){
            for(int i = a; i < b; i++){
                printf("i = %d\n", i);
            }
        }
        a++;
        b--;
    }
}

int main(void)
{
    function(2, 7);
    return 0;
}
#include <stdio.h>

int main(){
    int a = 23;
    int b = 45;
    do{
        a++;
        b--;
        printf("The current a is %d, b is %d\n", a, b);
    }while(a < b);
}
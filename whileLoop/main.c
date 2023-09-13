#include <stdio.h>

int main(){
    int a = 23;
    int b = 45;
    while(a < b){
        a++;
        printf("Current a is %d, b is %d\n", a, b);
    }
}
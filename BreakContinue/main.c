#include<stdio.h>

int main(){
    int a = 23;
    int b = 45;

    while(a < b){
        a++; 
        if(a == 33){
            continue;
        }
        printf("The current a is %d\n", a);
        
    }
    for(int i = 0; i < 10; i++){
        printf("i = %d\n", i);
    }
}
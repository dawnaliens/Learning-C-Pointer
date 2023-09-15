#include<stdio.h>

enum Name{
    First,
    Second,
    Richard,
};

int main(void){
    enum Name myName;

    myName = Richard;

    if(myName == Richard){
        printf("myName is Richard.\n");
    }else{
        printf("myName is not Richard.\n");
    }
}
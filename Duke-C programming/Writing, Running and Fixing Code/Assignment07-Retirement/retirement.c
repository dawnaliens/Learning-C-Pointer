#include<stdio.h>
#include<stdlib.h>

typedef struct retire_info{
    int months;
    double contribution;
    double rate_of_return;
}retire_info;


void retirement(int startAge, double initial, retire_info working, retire_info retired){
    
}



int main(void){
    int monthAge = 327;
    int Age = monthAge / 12;
    int month = monthAge % 12;
    printf("Age = %d", Age);
    printf("month = %d", month);
}
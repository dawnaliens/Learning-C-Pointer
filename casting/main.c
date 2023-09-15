#include<stdio.h>

int main(void){
    int Hours = 40;
    int days = 7;

    float avg = Hours / (float)days;
    //float avg = Hours / days;

    printf("Average hours per day: %.1f\n", avg);
    //printf("Average hours per day: %d\n", (int)avg);
}
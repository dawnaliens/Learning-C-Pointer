#include<stdio.h>

typedef struct rect_tag{
    int left;
    int right;
    int top;
    int bottom;
}rect_t;

typedef struct{
    int left;
    int right;
    int top;
    int bottom;
}another_rect;

int main(void){
    rect_t myRect;
    myRect.left = 1;
    myRect.right = 2;
    myRect.bottom = 10;
    myRect.top = 5;

    another_rect anotherRect;
    anotherRect.left = 23;
    anotherRect.right = 12;
    anotherRect.bottom = 45;
    anotherRect.top = 100;
}
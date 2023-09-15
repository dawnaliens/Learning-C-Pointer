#include<stdio.h>

struct rectangle {
    int left;
    int right;
    int top;
    int bottom;
};

int main(void){
    struct rectangle myRectangle;
    myRectangle.left = -4;
    myRectangle.right = 2;
    myRectangle.bottom = 23;
    myRectangle.top = 5;
    printf("My Rectangle Bottom left = (%d, %d)\n", myRectangle.bottom, myRectangle.left);
    printf("My Rectangle Top right = (%d, %d)\n", myRectangle.top, myRectangle.right);
}
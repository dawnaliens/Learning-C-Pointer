#include<stdio.h>

enum fruit_tag {
  BLUEBERRY,
  BANANA,
  PINEAPPLE,
  WATERMELON
};
typedef enum fruit_tag fruit_t;

void printFruit(fruit_t myFruit) {
  switch(myFruit) {
    case BLUEBERRY:
      printf("a blueberry");
      break;
    case BANANA:
      printf("a banana");
      break;
    case PINEAPPLE:
      printf("a pineapple");
      break;
    case WATERMELON:
      printf("a watermelon");
      break;
    }
}

void compareFruit(fruit_t fruit1, fruit_t fruit2) {
  if (fruit1 > fruit2) {
    printFruit(fruit1);
    printf(" is larger than ");
    printFruit(fruit2);
  }
  else {
    printFruit(fruit1);
    printf(" is smaller than ");
    printFruit(fruit2);
  }
}

// enum name_tag {
//   BLUEBERRY,
//   BANANA,
//   PINEAPPLE,
//   WATERMELON
// };
// typedef enum name_tag name_t;

// struct fruit_tag {
//   name_t name;
//   double size;
// };
// typedef struct fruit_tag fruit_t;

// fruit_t getBigger(fruit_t f, double d) {
//   f.size += d;
//   return f;
// }

int main(void){
    short y = 3000;
    short x = y + 1000;
    printf("x = %hd\n", x);

    double d = 4.669;
    printf("My number is %.2f.\n", d);

    int x2 = 5;
    double d1 = 11/x2;
    double d2 = 11/(double)x2;

    printf("d1 - d2 = %f\n", d1-d2);

    fruit_t myFruit = BANANA;
    fruit_t otherFruit = WATERMELON;
    compareFruit(myFruit, otherFruit);
    // fruit_t myFruit;
    // myFruit.name = BANANA;
    // myFruit.size = 5.2;
    // myFruit = getBigger(myFruit, 3.4);
    // printf("This fruit is %.2f grams.\n", myFruit.size);

    return 0;
}
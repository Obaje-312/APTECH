#include <stdio.h>
#include <stdlib.h>

void calQuadEquate(){
    double a, b, c, solution1, solution2;
    printf("enter the Coefficent of x^2: ");
    scanf("%d", &a);

    printf("enter the coeffiecent of x: ");
    scanf("%d", &a);

    printf("enter the Constant term: \n");
    scanf("%d", &a);

    printf("the params are: a=%d, b=%d, c=%d\n", a, b, c);
}

int main(){
    calQuadEquate();
    // int x;
    // printf("uninitialized x: %d\n", x);

    // int* prt = NULL;
    // if(prt == NULL) {
    //     printf("pointer is NULL, Avoinding undefined.\n");
    // }
    // return 0;

    int age;
    printf("please how old are you?");
    scanf("%d", &age);

    printf("you are %d years old", age);
}
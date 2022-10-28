#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num1 = %d, num2 = %d\n", num1, num2);

    ptrA = &num1;
    ptrB = &num2;

    printf("num1 = %d, num2 = %d\n", num1, num2);

    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;

    printf("num1 = %d, num2 = %d\n", num1, num2);

    ptrA = ptrB; // ptrA -> num2, ptrB -> num2
    ptrB = ptrA; // ptrB -> num2

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("*ptrA = %d, *ptrB = %d\n", *ptrA, *ptrB);

    num1 = *ptrB;
    num2 = num1 - 3;

    printf("num1 = %d, num2 = %d\n", num1, num2);
}
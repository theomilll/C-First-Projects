#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade1 = 6, grade2 = 10;
    int *pGrade1, *pGrade2;

    pGrade1 = &grade1;
    pGrade2 = &grade2;
    //directing the pointers to their respective variables

    printf("%p\n", pGrade1);
    printf("%p\n", pGrade2);
    //printing the adress of the variables associated with the pointers -- always use %p for printing adresses

    printf("%d\n", *pGrade1);
    printf("%d\n", *pGrade2);
    //printing the values of the variables associated with the pointers -- always use a * before the pointers if you want to print a value

}
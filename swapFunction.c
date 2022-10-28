#include <stdio.h>
#include <stdlib.h>

void findMinMax(int num1, int num2, int *pMin, int *pMax){
    if(num1 > num2){
        *pMax = num1;
        *pMin = num2;
    }else{
        *pMax = num2;
        *pMin = num1;
    }
}

void main(){
    int a = 5, b = 7, min, max;
    findMinMax(a, b, &min, &max);
    printf("min = %d\n", min);
    printf("max = %d\n", max);
}
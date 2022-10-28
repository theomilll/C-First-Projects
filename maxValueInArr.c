#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1, 2, 4, 5, 9, 7, 8};
    int max;

    max = arr[0];
    for(int i = 1;i < 7;i++){
        if(arr[i]>max)
            max = arr[i];
    }

    printf("The max digit in your phone number is %d\n", max);
}
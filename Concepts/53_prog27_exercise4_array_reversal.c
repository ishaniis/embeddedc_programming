/*
Author: Ishan S.
Date: 23rd April 2024
Objective: To implement array reversal functionality
*/

#include <stdio.h>

void arrayReversal_function(int *arr, int num){

    int a, b, temp, length;
    length = num;
    for(int a =0, b=length-1; b > a; a++, b--){

            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
    }
}

int main(){

    int testArr[] = {1,2,3,4,5,6};
    printf("Initial Array \n");
    for(int i =0; i < 6; i++)
    {
        printf("%d \t",testArr[i]);
    }
    printf("\n");
    arrayReversal_function(testArr, 6);
    printf("Array after reverse operation has been performed \n");
    for(int i =0; i < 6; i++){
        printf("%d \t",testArr[i]);
    }
    printf("\n");
    return 0;
}
/*
Author: Ishan S.
Date: 19th April 2024
Objective; To implement call by reference over the swap function
*/

#include <stdio.h>

int swap(int *a, int *b){

    int temp;

    printf("Values of a are %d and b are %d \n", *a,*b);

    temp = *b;
    *b = *a;
    *a = temp;

    printf("Swap is successful \n"); 
    printf("Values of a are %d and b are %d \n", *a, *b);

}

int main(){

    int x = 3;
    int y = 4;

    swap(&x,&y);

    return 0;
}
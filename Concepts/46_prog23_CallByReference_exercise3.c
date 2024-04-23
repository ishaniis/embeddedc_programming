/*
Author: Ishan S.
Date: 19th April 2024
Objective: Implement functionality of addition and subtraction using CallByReference
*/

#include <stdio.h>


int add_and_subtract_and_display(int *a, int *b){

    int sum = *a + *b;
    int subtract = *a - *b ;

    printf("Summation of %d and %d is:  %d \n", *a, *b, sum);
    printf("Subtraction of %d and %d is:  %d \n", *a, *b, subtract);

    return 0;
}

int main(){

    int a = 10;
    int b = 12;
    add_and_subtract_and_display(&a,&b);
    return 0;
}
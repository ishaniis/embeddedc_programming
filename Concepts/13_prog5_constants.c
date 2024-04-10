/*
Author: Ishan S. 
Date: 10th April 2024
Objective: To discuss the concept of the constant, by different methods (const keyword & #define )
*/

#include <stdio.h>
#define pi 3.14

int main(){

    int x = 3;
    const int y = 4;

    printf("The value of x is: %d \t and the value of y is: %d \n", x,y);
    printf("The value of pi is %f", pi);
    printf("\n");
    return 0;
}
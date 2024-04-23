/*
Author: Ishan S.
Date: 23rd April 2024
Objective: Demonstrate the concept of String functions
*/

#include <stdio.h>
#include <string.h>

void reverseString(char *arr){

    //Initialize two variables
    int length = strlen(arr);
    int a, b;
    char temp;
    //Concept is 
    // variable (a) will traverse from the start and b will traverse from the end
    for (a=0, b= length - 1; b > a ;a++, b--){

        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
        printf("Reverse string is: %s \n", arr);

    }

int main(){

    char test1[100] = "Ishan";
    char test2[] = "Sharma";

    int len_test1 = strlen(test1);
    printf("String is: %s", test1);
    reverseString(test1);
    printf("Reverse string is %s \n", test1);

    printf("Length of test1: %c \n", len_test1);

    return 0;
}
/*
Author: Ishan S.
Date: 28th April 2024
Objective: Using the Dynamic memory allocation functions (using calloc)
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    //Dynamic memory allocation


    //Use of calloc
    /*
    If you dont want to initialize your values with 0, dont use calloc in that case. 
    */
    int n;
    printf("Size of Array is:\n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++){

        printf("Enter the value No: %d of this array is: \n",i);
        scanf("%d", &ptr[i]);
        
    }

    for (int i =0; i < n; i++){
            printf("Value is: %d \n", ptr[i]);

        }

    return 0;
}
/*
Author: Ishan S.
Date: 28th April 2024
Objective: Using the Dynamic memory allocation functions (Using malloc)
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    //Dynamic memory allocation


    //Use of malloc
    int *ptr;
    ptr = (int*) malloc (10*sizeof(int));

    for (int i = 0; i < 3; i++){

        printf("Enter the value No: %d of this array is: \n",i);
        scanf("%d", &ptr[i]);
        
    }

    for (int i =0; i < 3; i++){
            printf("Value is: %d \n", ptr[i]);

        }
    return 0;
}
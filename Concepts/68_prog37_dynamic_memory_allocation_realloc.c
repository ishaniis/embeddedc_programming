/*
Author: Ishan S.
Date: 28th April 2024
Objective: Using the Dynamic memory allocation functions (using realloc) and use of free(ptr) -> to free up the dynamic memory
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    //Dynamic memory allocation using calloc and reallocating the memory using realloc


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

    //Use of realloc

    printf("Enter the new size of the array: \n");
    scanf("%d",&n);

    ptr = (int *)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++){

        printf("Enter the value No: %d of this array is: \n",i);
        scanf("%d", &ptr[i]);
        
    }

    for (int i =0; i < n; i++){
            printf("Value is: %d \n", ptr[i]);

        }

    printf("Free the memory: \n");
    free(ptr);
    printf("Memory allocation is freed up\n");

    return 0;
}
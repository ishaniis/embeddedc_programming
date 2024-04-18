/*
Author: Ishan S.
Date: 18th April 2024
Objective: Concept of Arrays and Pointers
*/

#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};

    printf("Address at first position: %p \n", &arr[0]);
    printf("Address at first position: %p \n", &arr[1]);

    /*
    O/p:
    Address at first position: 0x7ffdecb4bf80 
    Address at first position: 0x7ffdecb4bf84

    See, it's an increment by 4, indiciating the value has been added 4(ie. sizeof(int)) in this given architecture
    */

   //Now using de-referencing
   printf("Value at first position: %d \n", arr[0]);
   printf("Value at first position: %d \n", (*&arr[0]));

   //Now using arithmetic addition
   printf("Value at second position: %d \n", *(&arr[1]));
   printf("Value at second position: %d \n", arr[1]);
   printf("Value at second position: %d \n", *(arr + 1));

    // Can be said now:
    // *(&arr[1]) = arr[1] = *(arr + 1)

    //Now one of the important concept is
    /*
    I can't do 
    arr++ -> arr[0] address of a given array is constant
    To do the same, I could make a pointer pointing to this array and perform the following operation

    arr++; -> Will thow an error
    int *ptr_array = arr;

    ptr_array++; -> Will work
    */


    return 0;

}
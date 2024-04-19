/*
Author: Ishan S.
Date: 18th April 2024
Objective: Demonstrate the understanding of the concept of pointer
*/
#include <stdio.h>
int main()
{

    int a = 2;
    int * ptr = &a;
    int * ptr_2 = NULL;

    printf("The value of a is: %d \n",a);
    printf("Value of a using the pointer, de-referencing: %d \n",*ptr);

    printf("Now demonstrating the concept of Null Pointer: \n");
    printf("Value of second pointer: %p \n",ptr_2);

    /*
    o/p: Uptill ptr_2 is not declared as NULL pointer
    The value of a is: 2 
    Value of a using the pointer, de-referencing: 2 
    Now demonstrating the concept of Null Pointer: Value of second pointer: (nil)- 
    */

   /*
   O/p: After declaring NULL pointer
   NULL pointer concept helps to initilize the pointers. 
   */

    return 0;

}
/*
Author: Ishan S.
Date: 10th April 2024
Objective: Work with do-while loops
*/

#include <stdio.h>

int main(){
    int input_var;
    printf("Increment the given number upto 100 and terminate after the number reaches three digit i.e 100 \n");

    printf("Enter the number: \t");
    scanf("%d",&input_var);
    do
    {
        input_var = input_var + 1;
        printf("%d \n",input_var);
    } while (input_var < 100);
    

    return 0;
}
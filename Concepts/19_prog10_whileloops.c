/*
Author: Ishan S.
Date: 11th April 2024
Objective: To work with while loops
*/

/*
We've also learnt a technique as to how without using the variable some of the basic arithemetic operations can be performed within the printf statement
*/

#include <stdio.h>

int main(){
    int input_num, i=0;
    printf("Print the multiplication table \n");

    printf("Enter the number: \n");
    scanf("%d",&input_num);

    while(i < 10){
        // int product = input_num * i;
        printf(" %d * %d = %d \n", input_num,i,input_num*i);
        i += 1;
    }
}
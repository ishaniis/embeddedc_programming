/*
Author: Ishan S. 
Date: 13th April 2024
Objective: To understand and demonstrate the concept of Recursion
*/



#include <stdio.h>

//Writing a function to return Factorial using recursion
int factorial(int n){

    if (n==1 || n==0 ){
        return 1;
    }
    else {
        return (n * factorial(n-1));
    }
}

int main(){
    int var_num;
    printf("Enter the number: \n");
    scanf("%d",&var_num);

    int res = factorial(var_num);
    printf("Factorial is: %d \n",res);

    return 0;
}
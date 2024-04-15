/*
Author: Ishan S. 
Date: 13th April 2024
Objective: To demonstrate the concept of functions in C
*/

#include <stdio.h>
#include <string.h>

int sum(int p, int q){

    return p + q;
}

int subtract(int p, int q) {

    int res;
    if (p > q){
        res = p - q; 
    }
    else{
        res = q -p ;
    }

    return res;
    
}

void printValue(){

    char var_name;
    printf("Enter your name: \n");
    scanf("%c",&var_name);

    printf("Entered Value is: %c \n", var_name);
}

int main(){
    int a = 10;
    int b = 20;

    int c = sum(a,b);

    printf("The sum of a and b is: %d \n",c);
    printValue();
    return 0;
}
/*
Author: Ishan S.
Date: 18th April 2024
Objective: To develop fibonnaci sequence using only two variables
*/

#include <stdio.h>

int fibonacci_iterative_second_method(){

    //Initializing two  variables
    int a, b,input_index;
    a = 0; // first term
    b = 1; // second term

    printf("Enter the index you need the value for: \n");
    scanf("%d", &input_index);

    //Now initialize the loop uptill (n-1)
    for (int i =0; i < input_index-1; i++){
        b = a + b; //Storing third variable (Reusing the b)
        a = b - a;

        
    }
    printf("The value is: %d \n", a);
    return a;
    
}


int main(){

    fibonacci_iterative_second_method();

    return 0;
}
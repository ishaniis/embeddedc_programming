/*
Author: Ishan S.
Date: 18th April 2024
Objective: Print diffent start patterns in C
*/

/*
To print:
Triangular start pattern 

Reverse triangular star pattern
*/

#include <stdio.h>
#include <math.h>

int triangular_star_pattern(int n){

    int input_star = n;

    for (int i =0; i < input_star + 1; i++)
     {
        for(int j = 0; j < i; j++){
            printf(" * ");
        }
        printf("\n");
     }
           

    return 0;
}

int reverse_triangle_star_pattern(int n){

    int input_star_reverse = n;

    for (int i = input_star_reverse ; i > 0; i--)
    {
        for(int j = 0; j < i; j++){
            printf(" * ");
        }
        
        printf("\n");
    }

    return 0;
}

int main(){
    triangular_star_pattern(4);
    reverse_triangle_star_pattern(4);
    return 0;
}
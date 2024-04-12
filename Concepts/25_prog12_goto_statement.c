/*
Author: Ishan S.
Date: 11th April 2024
Objective: To effectively demonstrate the use of goto statements
*/

#include <stdio.h>

int main(){
    int x;

    label:
        printf("Inside the label \n");

        printf("Enter the number: \n");
        scanf("%d",&x);
        if (x > 10){
            goto end;

        end:
        printf("Outside the label \n");
        }
        else{
            printf("Didn't went to end label \n");
        }
        
    
    return 0;
}
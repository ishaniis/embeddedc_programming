#include <stdio.h>

int main(){

    int input_var;
    printf("Exercise 1: Program to make multiplcation table \n");

    printf("Enter the number for which you'd like to display the multplicate table: \n");
    scanf("%d",&input_var);
    
    for(int i=0; i<=10; i++){
        int product = input_var * i;
        printf(" %d * %i = %d \n",input_var,i,product);
    }

    return 0;
}
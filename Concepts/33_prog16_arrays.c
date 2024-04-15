/*
Author: Ishan S.
Date: 15th April 2024
Objective: Demonstrate the concept of array
*/

#include <stdio.h>

void input_and_diplay_array(int n){

    int student_marks[100];
    int length_arr;
    length_arr = n;
    for(int i = 0; i<n;i++){

        printf("Enter the marks for %d value \n", i);
        scanf("%d",&student_marks[i]);
    }

    int input_to_print;
    printf("Do you want to print the array now: \n");
    printf("1. Display the array \n");
    printf("2. Exit the program \n");
    scanf("%d",&input_to_print);

    if (input_to_print == 1){
        for(int i =0; i<3;i++){
            printf("The value %d th element in array is: %d \n",i,student_marks[i]);
        }
    }
}


int main(){

    //Demo Array
    int student_marks[10];
    student_marks[0] = 98;
    student_marks[1] = 99;

    input_and_diplay_array(3);
    
    return 0;
}
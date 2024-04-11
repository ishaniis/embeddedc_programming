/*
Author: Ishan S.
Date: 10th April 2024
Objective: To practice the concept of if, if-else, if else if Conditionals
*/
#include <stdatomic.h>
#include <stdio.h>

int main(){
    int age;

    printf("Enter your age: \n");
    scanf("%d",&age);

    printf("Age entered by the user is %d \n", age);

    if (age > 18){
        printf("You're adult & eligible to vote");
    }

    else if(age > 16 && age <18){
        printf("You are not eligible to vote but you can make your driving license \n");
    }

    else{
        printf("You are not eligible yet to Vote.");
    }

    return 0;
}
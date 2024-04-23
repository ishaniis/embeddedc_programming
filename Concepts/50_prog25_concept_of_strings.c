/*
Author: Ishan S.
Date: 22nd April 2024
Objective: Demonstrate the concept of Strings in C Programming
*/

#include <stdio.h>

void printString(char str[]){

    int i;
    while(str[i]!='\0'){
        printf("%c \t",str[i]);
        i++;
    }
    printf("\n");
}

int main(){


    //Valid String Declaration
    char str[] = {'I', 's', 'h', 'a', 'n', '\0'};

    char str_2[40] = "Vishal Sharma";
    char str_3[40];
    
    // gets(str_3);
    // puts(str_2);

    // //Calling the function
    // printString(str);

    // printString(str_2);
    // getline(str_3);

    // gets(str_3); (Depreciated Functionality in 2024)
    // fgets(str_3,40,);

    return 0;
}
/*
Author: Ishan S.
Date: 25th April 2024
Objective: Develop a HTML parser to remover the format specifiers in the text
*/

#include <stdio.h>
#include <string.h>

typedef union htlm_input {
    char html_input[100]; 
}hm;

void html_parser_self_attempt(char *arr){

    int length_of_string = strlen(arr);

    // Hard Logic
    // Moment it sees '<' it starts reading & storing it into a variable -> Terminates moment it sees the '>'
    
    //Initializing two character arrays, One to traverse , other to store the content
    char a[100]="";
    char b[10] ="";
    int j = 0; // Traversing Index for b

    for (int i =0 ; i < length_of_string - 1 ; i++){
        if (arr[i] == '>')
        {
            i = i + 2;
            
            while (arr[i] != '<')
            {
                b[j] = arr[i++];
                strcat(a,b);
                // printf("%c \t", *(&b[j]));
            }
            j = 0;

            }
    }
    printf("Value of String is:  \n%s \n", *(&a));
    }

int html_parser_robust_func(char *arr){

    int in, index;
    //Let's initialize the above variables
    index = 0;
    in = 0;

    int length_of_string = strlen(arr);

    for(int i =0; i< length_of_string; i++){

        if (arr[i] == '<'){
            in = 1;
            continue;
        }
        else if (arr[i] == '>'){
            in = 0;
            continue;
        }
    // Moment it observes the in is set to 0, after it observes the closing bracket, it'll set to index to that particular i location and increment with +1
            if (in == 0){
                arr[index] = arr[i];
                index++;
            }
    }
        arr[index] = '\0';

    //Now let's work towards getting rid of the white spaces in the middle and at the end of the phrase
    //First we'll deal with white spaces in the beginning
    while (arr[0] == ' '){
        // Shift the index to the left
        for (int i = 0; i < strlen(arr); i++){
            // Shifting index by +1 increment, means the index is offset by +1, so now it has it's own new origin
            arr[i] = arr[i+1];
        }

    }

    while(arr[length_of_string -1] == ' '){
        // Moment you see the white space at the end of the length of the string, get rid of it, by putting the string terminator
        arr[length_of_string - 1] = '\0';
    }

    return 0;
}

int main(){

    char test[100] = "<h1> This is the landing page </h2>";
    html_parser_self_attempt(test);

    char test_2[100] = "<u2> Lets go!!We are going to Super Bowl this time, Detroit  </u2>";
    html_parser_self_attempt(test_2);

    html_parser_robust_func(test_2);
    printf("String is:\n%s \n", test_2);
    return 0;
}
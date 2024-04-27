/*
Author: Ishan S.
Date: 25th April 2024
Objective: Demonstrate the concept of static variables in a C program
*/

/*
Order of Execution of Static Variables:
Static Varibles are run before the main function is run by the compiler, so it deems critical for it to have a constant value. Else, it'll create problem in terms of memory allocation, that is the very reason static variable seeks a constant literal.
*/

#include <stdio.h>


int declare_static(){

    // struct result r1;

    static int count;
    int x = 34;
    count++;
    x++;
    int result[2] = {count, x};
    
    return count;
}

int main(){
    // static int x;
    // int y;
    // y++;
    // // x = 5 + 1;
    // x++;
    // printf("The value of static variable x is: %d \n", x);
    // printf("The value of variable y is: %d \n", y);
    // return 0;

   

    // int count1,x1 = declare_static();
    // printf("Count is: %d  \t Value of x is: %d \n",count1,x1);
    
    // int count2,x2 = declare_static();
    // printf("Count is: %d  \t Value of x is: %d \n",count2,x2);

   
    // int count3,x3 = declare_static();
    // printf("Count is: %d  \t Value of x is: %d \n",count3,x3);

    printf("%d \n", declare_static());
    printf("%d \n", declare_static());
    printf("%d \n", declare_static());

    /*
    Produced Output:
    1 
    2 
    3 
    Which states that the value of static variable even inside the function got incremented with every call, it was preserved between two instances of the call of function. 
    */

    return 0;
}
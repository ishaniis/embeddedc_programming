#include <stdio.h>

int main(){
    int a, b;
    
    a = 5;
    b = 6;

    /*
    Operation between two integers -> Integer Output
    or probably the result could be made to save in a floating point variable(float)
    */

    printf("Add Operation: \n");
    printf("Add: %d \n", a+b);

    printf("Subtract Operation: \n");
    printf("Subtract: %d \n", a-b);

    printf("Multiply Operation: \n");
    printf("Multiply: %d \n", a*b);

    printf("Divide Operation: \n");
    printf("Divide: %d \n", a/b);

    printf("Modulus Operation: \n");
    printf("Modulus: %d \n", a%b);

    return 0;
}
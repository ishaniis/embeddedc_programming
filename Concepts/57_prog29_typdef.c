/*
Author: Ishan S.
Date: 25th April 2024
Objective: To demonstrate the concept of typedef to declare alias name of the given data type
*/

#include <stdio.h>
#include <string.h>

typedef struct EmployeeDatabase {

    char EmployeeName[20];
    char Designation[20];
    float Salary;
    char Grade[10];

} stE_DB;
// Declaration of stE_DB as the shortform

struct EmployeeDatabase employee_1, employee_2;
// /Now using typedef
stE_DB employee_3;

int main(){

    strcpy(employee_3.EmployeeName, "Jk Sharma");
    printf("Employee 3's name is: %s \n", employee_3.EmployeeName);
    
    //Declaration of new datatype
    //Where int* -> intptr -> Makes it more convenient by assigning alias name
    typedef int* intptr;
    intptr a, b;
    int c = 10, d =20;

    a = &c;
    b = &d;

    printf("The value of c is: %d \n", *a);
    printf("The value of d is: %d \n", *b);

    return 0;
}


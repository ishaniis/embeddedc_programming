/*
Author: Ishan S.
Date: 24th April 2024
Objective: To demonstrate the concept of Structures in C Programming
*/

#include <stdio.h>
#include <string.h>

struct StudentDatabase{

    char student_name[20];
    char fathers_name[20];
    int age;
    char grade[20];
};

void printStudentDatabase(struct  StudentDatabase x1)
{
    printf("Student's name: %s \n", x1.student_name);
    printf("Student's Father's name: %s \n", x1.fathers_name);
    printf("Student's age: %d \n", x1.age);
    printf("Student's grade: %s \n", x1.grade);
};

//Struct Global Variables
struct StudentDatabase g1;

int main(){
    // struct Local Variables
    struct StudentDatabase s1, s2, s3;

    //Reason for using this -> As char[20] -> is not assignable -> By this modification we are able to assign/copy the value.
    strcpy(s1.student_name, "Student Sharma");
    strcpy(s1.fathers_name, "Mr Sharma");
    s1.age = 19;
    strcpy(s1.grade, "Freshmen");

    strcpy(s2.student_name, "Student Gupta");
    strcpy(s2.fathers_name, "Mr Gupta");
    s2.age = 20;
    strcpy(s2.grade, "Sophomore");

    strcpy(s3.student_name, "Student Kulkarni");
    strcpy(s3.fathers_name, "Mr Kulkarni");
    s3.age = 21;
    strcpy(s3.grade, "Junior");


    printStudentDatabase(s1);

    return 0;
}
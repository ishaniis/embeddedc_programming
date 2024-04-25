/*
Author: Ishan S.
Date: 25th April 2024
Objective: To demonstrate the concept of Unions and when to use it !
*/

#include <stdio.h>
#include <string.h>


typedef union student_db {

    int student_id;
    int student_marks;
    char students_name[20];
    char favorite_subject[10];
} stdb_u;

//Use of Unions: Always for effective memory management
// Use of Structures: Always for making custom data types -> There's no competition in the use of Unions and Structures -> It appeals differently to different use-cases. 
//In Unions, only the last declared asset -> will be preserved -> Rest may or may not be preserved. 

int main(){

    stdb_u student1;

    student1.student_id = 12;
    student1.student_marks = 90;
    //Again, You can't assign something to a character array, you could subvert the process using the strcpy command utility
    strcpy(student1.students_name , "Rajat Sharma");

    printf("Student's name is: %s \t Student's id is: %d \t Student obtained marks: %d \n", student1.students_name, student1.student_id, student1.student_marks);
    

    /*
    Observed O/P:

    Student's name is: Rajat Sharma          Student's id is: 1634361682     Student obtained marks: 1634361682
    
    So as observed, last declared entity of the member was name i.e Rajat Sharma, 
    that was preserved, rest all of it has garbage values.
    */



    return 0;
}
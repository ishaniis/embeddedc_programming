/*
Control Statements
*/

/*
if-else statements -> Control Statements
- Used to perform operations based on conditions
*/

/*

Types of if statements
- if statements
- if else statement
- if else if statements
- nested if statements
*/

/*
Syntax of if statements:

if (input > 2){
    print("Input greater than 2");
}

*/

/*
Flowchart of if-else:

For a given condition, 
If its TRUE: execute if block
If its FALSE: execute else block
*/

/*
Flowcharts for if-else-if 

For a given true: 
Condition 1 -> TRUE -> After IF code is executed
Condition 1 -> FALSE -> After Else code is execute

Condition 2 in else -> True -> IF code is executed
Condition 2 in else -> False -> ELSE code is executed


*/

/*
Switch Case Statements
*/

/*
Syntax of Switch-case:
int a =3
switch(a){

    Case 2:
    printf("Value is 2");
    break;

    Case 3: 
    printf("Value is 3");

    default:
    printf("Invalid ");
}
*/

/*
Usecase of Switch-case - why not to use if-else
- Switch case is a convenience functions, we can work with if-else (but it gets cumbersome and messy)
*/

/*
Rules for Switch Case:
1. Expression either needs to be -> int or char
2. Case value - must be integer or character
3. Case should be nested inside switch
4. Break statement is not neccessary, can be used as per the use-case. 
*/

/*
Flowchart of switch case

If Expression -> Matched -> Case 2 (statement 2) -> break
If Expression -> Matched -> Case 3 (Statement 3) -> break
Default will be executed, so for you not default execute when the case match is there, use break statement. 
*/
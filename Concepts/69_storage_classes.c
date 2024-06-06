/*
Concept of Storage Classes
*/

/*
Scope defines the intial value and lifetime of a variablew 
*/

/*
What is Scope?
Tells where this variable will be available
*/

/*
Initial Value
*/

/*
Lifetime?
It will be available uptill when - defines the life of the variable 
*/

/*
Types of Storage Classes:
1. Automatic
2. External
3. Static
4. Register
*/

/*
A. Automatic Variables: 
(AUTO Storage Class)
i.   Scope: Local to the function body they are defined in.
ii.  Default Value: Garbage value / Random Value
iii. Lifetime: Till the end of the functional block they are defined in
iv. A variable defined without any storage class specification is by default an automatic variable. 
v. They are local variables
*/

/*
Example of Auto Storage classes
int main({
    // variable ishan_sharma will continue to exist until main() function exists. 
    int ishan_sharma;
    ishan_sharma = 29;

    return 0;

};

int ishan, auto int ishan -> works the same way

*/


/*
B. External Storage Class
i.   Scope: Global to the program where they are defined
ii.  Initial Value: Default is set to 0
iii. Lifetime: Avilable throughout the lifetime of the program
iv.  Also known as Global Variables. 
v.   Recommended not to use unnecessary global variables -> Comes with the memory cost -> Rather use dynamic memory
*/ 

/*
extern keyword
-> Helps to tell compiler that it has been declared somewhere else. 
-> Using extern -> will not automatically allocated space to the variable
-> There's a difference between definition and declaration
*/

/*
C. Static Variables : Static Storage Class
i. Scope: Local to the block they are defined in
ii. Default initil value: 0
iii. Lifetime: Existence until the program call/run
iv. Syntax: static int ishan (Will keep the older value persistent)
v. Recommended to reduce the use of unneccessary static variables in a program -> Comes with a cost of memory
*/


/*
D. Register variables/Register storage classes:
i. Scope: Local to the function they declared in
ii. Default Initial Value: Garbage Value
iii. Lifetime: Until the end of the function block, in which variable is defined.
iv. Register variables requests itself to be stored under the register stroage/CPU register, for faster access through the memory
v. Functional Usage: Utilized for the variables which are used frequently. -> Used for loops where variables are used frequently.
vi If register storage is not available, then compiler will allocate you to AUTO storage class
*/
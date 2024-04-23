/*
Concept of String Functions
*/

/*
Concept left to be covered:
1. Structures in C
2. Typedef in C
3. Unions 
4. Static Variables
5. Memory Layout 
6. Dynamic Memory Allocation - malloc and Calloc
7. Storage Classes in C
8. Void Pointer
9. Null Pointer
10. Dangling Pointer
12. Wild Pointer
13. C- Pre-processor Introduction 
14. Pre-defined Macros
15. File I/O Operations in C
16. Function Pointers
17. Concept of Memory Leak
*/

/*
We express string using an array of characters terminated by Null Character '\0'
String: Array of Characters terminated by NULL character
*/

/*
Now, Let's talk about string.h library:
1. strcat() -> Concatenate strings
For example: 
strcat("Hey", "Ishan") -> "Hey Ishan"

2. strlen() -> Length of Strings
For example: 
strlen("Ishan") -> Length of string: 5

3. strrev() -> Reverse of a string
For example:
strrev("Ishan") -> "nahsi"

4. strcpy() -> Used to copy a string
For example:
strcpy("User 1: 1230", "User2: 1231") -> Copies string ("User 1: 1230") into "User2: 1231"

5. strcmp() -> Used to compare two given strings. 
For example:
strcmp("Hello", "Ishan") -> 
ASCII -> represents in 7 bits
H(first string): Ascii (x)
I(second string): Ascii (x + 1) 

*/
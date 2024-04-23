/*
Concept of Strings
*/

/*
String is a data type ?
In C Programming, String is not a data type in C.
*/

/*
Why their exist no String data type in C?
We express String using an array of characters terminated by a null character"
Null Character -> Represents with ASCII value -> 0, indicates that's the end of the character array
*/

/*
Character of Array: Length of String + 1(To store Null Character)
String: Array of characters terminated by NULL character, need an extra character to indicate the end of the character array
*/

/*
char name[] = "Ishan"; -> Moment you put double quotes you indicate compiler to add the NULL character at the end of the character array.
char name[] = {'I', 's', 'h', 'a', 'n', '\0'} -> You got to add NULL character at the end of the character array when you are using single quotes
*/


/*
Example:

char str[52];
gets(str); -> Input your string

printf("%s",str);
or
puts(str) -> stdio function 
*/

/*
Use gets and puts

char str[34];
gets(str); -> To input the string
//Can be done using Scanf as well, but has hard time work

puts(str); -> To output the entered string

//Can also be done using the printf as well. 

*/
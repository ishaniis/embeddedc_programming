// Format Specifiers and Escape Sequence

/*
Format Specifiers: Way to communicate to compiler which kind of data types you'd like to use during input and output displaying. 

%a.bf (b decimal points, in a 'a' character space)

%d - int
%f - float

%0.1f - No character offset because it's specified 0 here, it'll have accuracy uptill 1 digit after decimal
%10.2f = It'll offset with 10 character space, it'll have accuracy upto 2 digits after decimal point
So if a variable is six space decimal, and you end up specifying %10.2f, so it'll offset it by 4 character spaces (10 - 6 = 4)

Literal understanding of %10.2f
In 10 character space, with 2 decimal point accuracy, number/input should be printed. Now how much empty space it'll produce will depend on the length of the number

If you specify %-10.2f
It'll leave 10 spaces after the number is displayed on the terminal

*/

/*
Some key Format Specifiers, for the others online documentations for C can be referred :
%c - characters
%d - integer
%f - float
%l - long
%lf - double
%Lf - long double


*/

/*
Constants: Value of something which can not be altered or changed.

How to define it:
const keyword
#define pi

*/

/*
While using define keyword
Correct Way: #define pi 3.14
Incorrect Way: #define pi = 3.14 (There's no assignment being done, rather you're defining the variable using the #define )
*/


/*
Escape Sequence:  Sequence of characters (\n - is a single character, not \ and n are separate characters)

\n - new line
\t - tab
\a - Alarm or Beep


It is composed of two or more character starting with \
*/

/*
What are comments in C?
Comments are a way to effectively communicate logical workflow of your code. It increases the readability of the code. 

During pre-processing, comments are removed, comments are specifically for the programmer/developer, for their readability of the code. Also helps 
to communicate the workflow to the developers. 

*/
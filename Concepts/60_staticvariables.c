/*
Concept of Static Variables
*/

/*
Scope of variables:

What is scope?
Indent or block of code, where that particular element can be accessed and used. Beyond that block, the element has no existence. 
Scope could be local or global - depending on the declaration and where it has been defined in the body of the code. 

1. Local Variables / Formal Arguments: 
- Variables accessed inside function or a block are called Local Variables. 
- Only can be accessed within the function they've been declared, inaccessible outside any other function.
- - In Cpp, we've got a concept of Friend Functions (But not in C programming)
*/

/*
2. Global Variables:
- Variables declared outside the main() function
- Accessible throughout the entire program
- If local and global has same name, local will take precedence. 

*/

/*
3. Formal Arguments -> treated as local variables in a function -> These variables take precedence over global variables. 
*/

/*
4. Static Variables:
- Which preserves the value within a function -> from its previous scope

Syntax:
static <data_type> name_of_variable;

Characterisitics of Static Variables:
- Remain in memory throughout the program
- These variables are initialized to 0, if not initialized explicitly.
- If initializing static variables, static variables can only be initialized using constant literals. 
- - > //static int b = 5 // Will Work
- - > // static int b = value_generator() // Will not work
- - > Reason: It wants to allocate memory, before running the main function & doesn't likes to run any other function


*/
//Basic Operators in C Programming

/*
Operator is a symbol to perform operations in a given programming language
*/

/*
+
- 
* - Multiple
/ - Divide
*/

/*
functions: 
printf("%d", 3+7)
scanf("%d", &a);
*/

/*
Float has 6-7 digit precision
*/

/*
Types of Operators:
1. Arithemtic (+,-,*,/, %) , 8%3 = 2 
2. Relational (==, >=, <=, !=)
3. Logical (&&, ||, !)
4. Bitwise Operators (&(and), |(or), ^(XOR - Exclusive OR), ~ (One's compliment) , << (Binary LS), >>(Binary RS))
Exclusive OR: Needs one False & One True - leads to True(High)
- One High(1), Another Low(0) -> High (1)
- One High(1), Another High(1) -> Low(0)
- One Low(0), Another Low(0) -> Low(0)
5. Assignment Operator (=, +=, -=, /=)

+= (Add & Assign), 
- - a = 7, a+=1, a=8 (& then asing)

6. Misc operators
- sizeof()
- & - Address of
- * Pointer to a variable
- ?: Conditional Expression
*/

/*
Precedence of Operators:

In maths, BODMAS

But in C, we follow a specific precedence order
But if we have operator with same precedence, then we'll follow the associativity (Left to Right precedence) like for + , -

Associativity takes precedence when parenthesis is missing within operators with same precedence. 
*/
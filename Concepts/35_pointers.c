/*
Concept of Pointers
*/

/*
What is a pointer ?
Pointer which points to a specific memory of a given object or a function
*/

/*
Let's understand pointers - How do they work

Lets say I have 
Element/Object A  Element B/Object B
A = 3, Now for a given instance, if their exist an object which points to the value of A, can be done using the concept of pointer.

So, Now If I say, B points to A
That simply means, that the *B holds the address of the Object A.
*/

/*
Pointer Declaration/Syntax:

data_type * object_name;

It is as same as declaring the variables, but the moment you add a *, it tells the compiler it's a variable which would act as pointer to preserve or store the address of some other object.
*/

/*
Example
int A=3;
int *B = &A; (B holds the address of A, &: Address of)
*/

/*
Now for an instance, if I would like to retrieve the value of A i.e 3, from pointer B, I can simply use de-referencing operator ( *)
*/


/*
printf("Address of A: %p",B)
or
printf("Address of A: %p", &A)

printf("Value of A: %d", *B)
or
printf("Value of A: %d", A)
*/

/*
Now, at this point, we know a pointer B in the program holds the address of A, but if someone want's to know the address of B, then

printf("Address of the pointer B which holds the value of A: %p", &B)
*/
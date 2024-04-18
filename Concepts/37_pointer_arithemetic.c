/*
Concept of Pointer Arithmetic
*/

/*
int a = 3;
a++
a is value will be 4
*/

/*
But now in the case of pointers
int *ptr = &a;
ptr++

This will not increase the value of a or address, it'll increase the size of ptr. 
*/

/*
Let's take an example
for a given
ptr (pointer, pointer to a)
Let's say the address of the pointer is: 1234

Now, you did, ptr++ or ptr + 1
Ideally, you would expect the result to be 1234 + 1 = 1235

But, it'll be different,
Reason: As it'll be incremented by the size of 1 complete integer being introduced.
So it'll be (as per my architecture): 1234 + 4 = 1238 (Size of int: 4 in my system architecture, value can change depending on user is using either 32 bit or 64 bit architecture)
*/
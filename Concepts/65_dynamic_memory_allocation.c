/*
Concept of Dynamic Memory Allocation 
*/

/*
Summarize our earlier discussion from 64_concept_of_dynamicmemory.c
DMA -> a way in which the size of a data structure can be changed during the runtime.
*/

/*
Functions which help for Dynamic Memory Allocation:

1. Malloc
2. Calloc
3. realloc
4. free
*/

/*
1. malloc: memory allocation -> reserves memory with given amount of bytes. 
-> Stands for memory allocation
-> Return value is a void pointer to the allocated space. -> Need to typecast as per your requirements
-> However, if the demanded space is not available, allocation of memory fails -> Returns NULL pointer 
-> All the values at allocated memory are intialized to garbage values
Syntax
ptr = <ptr_type>* malloc(size_in_bytes)
ptr = int * malloc(size_in_bytes)

Usage:
int * ptr;
ptr = int* malloc (3 * sizeof(int))

*/


/*
2. calloc: Continous Allocation
-> Exactly same as malloc  but it's a -> Contigous Allocation 
-> All the values are intialized to zero(rather than garbage in malloc).

Syntax:
ptr = (ptr-type)* calloc(n, size_in_bytes)

*/


/*
3. realloc() -> Stands for re-allocation
-> Allows to re-write/re-allocate the given memory
-> Syntax:
ptr = (ptr-type)* realloc(ptr, new_size_in_bytes)
*/

/*
4. free()
-> Used to free the allocated memory
-> If DM is not required anymore, we can free it using free function
-> Free memory in the heap

Syntax:
free(ptr);

*/
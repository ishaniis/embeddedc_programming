/*
Concept of Unions
*/

/*
Kinda similar concept of Structure
*/

/*
Structure vs Union
Union: Is also user-defined data type. 

Structure -> Each member has it's own storage location
Union -> Uses a single shared memory location. Whereas Single shared memory location equivalent to largest data member. 
Union helps to optimize memory location. 
*/

/*
Member access operator -> (.)

Syntax is similar to Struct -> in place of struct -> replace it with Union
*/


/*
Comparison with Struct & Union -> In memory allocation -> 

struct student{

    float marks // 4 bytes
    int id // 4 bytes

} s1s;   

s1s -> Structure -> Occupies Total (4 + 4) - > 8 bytes of Memory

union student{

    float marks //4 bytes
    int id // 4 bytes
} s1u;

s1u -> Union -> Occupies Total of 4 bytes of memory location -> shared between marks and id

*/

/*
When to use unions ? and Why ?

Unions -> Saves memory -> Effective on memory allocation -> leads to -> Better Memory Management
If Memory allocation is not concern -> Use Structure. 
*/


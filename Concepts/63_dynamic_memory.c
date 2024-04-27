/*
Concept of Dynamic Memory
*/

/*
-> Statically allocated Variables ->> fixed size in memory
-> Memory is a very useful resource -> Need to use it very cautiously. 
*/

/*
DMA -> A way by which the size of a data structure can be changed during the runtime. 
*/

/*
SMA -> Static Memory Allocation vs DMA -> Dynamic Memory Allocation

1. In SMA, allocation is done before the program execution
2. No memory reusability and memory allocated cannot be freed. 
3. Less Efficient
*/

/*
Dynamic Memory Allocation:
1. Allocation is done during the program's execution
2. Memory reusabiliuty is the key feature of DMA, and the allocated memory can be freed when not required. 
3. More Efficient. 
*/

/*
How memory allocation happens in C Programs:
How it's done ! - > The entire workflow of memory allocation

Memory assigned to a program in a typical arch can be broken down into four segments:
A. First : Code (Text Segment)

B. Second: Static & Gloabl Variables 
B.1 Data Segment: To store intialized data 
B.2 BSS Segment: To store un-initalized segment of the data. Block started by symbol. (Coming from Assembly Operator)

C. Stack: It grows when the program goes ahead. Typically deals 

D. Heap: Heap grows when we allocates dynamic memory. Using Heap is exactly -> Dynamic Memory Allocation

*/

/*
Memory Layout:

Bottom to top:
Code -> (Global & Static Variables) -> Stack -> Heap (Top most)

1. Program execution starts with main()
2.1 Moment main() is called for -> All the variables of main() will be called into the stack frame
2.2 Intially, in the stack, some memory will be specifically reserved for main() in the stack -> Called as stack frame of main() method/function. 
3. Stack frame -> Is nothing but the list of all the storage
4. Follows: LIFO (Last in, First Out) in Stack



Stack (Bottom to Top:)
main() (Bottom Most) -> Pops after return -> Stack is clean
func1() -> Pops after return
printf() (Top most) -> Pops after returned

*/

/*
Important aspects:
1. Heap and Stack grow in opposite directions. 
2. Compiler allocates some space for the stack part of the memory
*/

/*
What is stack overflow?
When does that happen?

If, Stack and Heap brought in, if memory is exhausted -> leads to -> Stack Overflow
Compiler -> allocates -> Some memory -> Stack part of the memory 

If stack memory is exhausted. When does that happen?
In recursion, calling func1 -> inside func1 (calling func1) 
When recursion with bad base condition. 


*/

/*
Limitations of Stack & When to prefer Heap
For variable sized array, where you got to free memory after not being used -> can be flexibly used by the developer
*/

/*
Use of Heap:
You store the address of the pointer, pointing to some memory allocation in heap, but you store the address of the pointer in the stack. Address is stored by the local function in the main function.
*/

/*
Disadvantages of Heap memory:
(With great power, comes great responsibility)
Heap will grow exponentially, if not used effectively. 

Like in a case, where you overwrite the pointer, the memory will not get freed automatically
*/

/*
Best Practices of Heap

main(){
    int * ptr; -> Pointing towards a memory in Heap
    // Then freeing Memory after using it -> is very critical to effectively utilize your memory. 
}
*/

/*
Syntax to check the size of .exe

gcc <file.c> ; size <name_of_the_executable.exe>
*/



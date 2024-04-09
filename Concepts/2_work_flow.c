//Workflow of C Program

/*
int main() -> In this int return will go to the Operation System, return 0 will give the program perfectly, it'll return 0 to OS
gcc -Wall -save-temps main.c -o main
*/

// o/p: 

/*
.c -> .i -> .s -> .o -> .exe 
Step 1: Preprocessing: Comments are removed, macros are extracted , copied and pasted into a new file, i.e file is .i file
Step 2: Compiling the .i file into assembly level instructions, i.e the file with .s extension 
Step 3: Assembly level instruction to machine level instructions (.o) .o - binary
Step 4: Linking converts the .o (binaries) into a executable file.
*/
 
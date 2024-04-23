/*
Concept of Call by Value and Call by reference:
*/

/*
Actual/Arguements Variables and Formal/Local Variables
*/

/*
int add(int a, int b){

    return a + b;
}

int main(){
    sum(x=2, y=3)
}

-> Where x and y are Acutal Variables also known as Arguements. 

-> Where a and b are Local Variables also known as Formal Parameters.
*/

/*
In cpp, Call by Value add(2,3)
When arguements are passed, it's copied into Formal Parameters(a,b), only formal parameters/local variables will only change

Call by reference: 
Copies the address

int func1(*a){

}

int main(){

    int func1(&x); //Passing the address
}

Difference wrt to Call by Reference is that the address of the arguements is copied rather than the actual value of the Arguments. 
*/



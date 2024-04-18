/*

*/

#include <stdio.h>

void fibonacci_iterative(int input_n)
{

    int n = input_n;

    int f_1[100];

    f_1[0] = 0;
    f_1[1] = 1;

    int next_term;
    //Initilize the third var:

    //Logic Building
    if ( n < 2)
    {
        printf("%d",n);
    }
    else
    {   printf("%d, %d",f_1[0],f_1[1]);
         for(int i = 2; i<n;i++)
         {      
                
                next_term = f_1[1] + f_1[0];
                printf(", %d",next_term );
                f_1[0] = f_1[1];
                f_1[1] = next_term;
                
            }
    }
    printf("\n");
}
           
int fibonacci_recursion( int n){
    
    int input_recursion = n;
    
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);    
    }

}


int main(){

    fibonacci_iterative(50);
    
    for(int i =0; i < 50; i++){
        printf(" %d ,",fibonacci_recursion(i));
    }

    return 0;
}
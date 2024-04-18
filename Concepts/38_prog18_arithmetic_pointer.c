/*

*/

#include <stdio.h>

int main(){
    int a = 34;

    int* ptr = &a;


    printf("%p \n", ptr);

    printf("%p \n",ptr + 1);

    /*
    O/p:
    0x7ffe056a712c -> 140728989282604
    0x7ffe056a7130 -> 140728989282608
    */

    return 0;
}
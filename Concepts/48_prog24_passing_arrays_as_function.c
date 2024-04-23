/*
Author: Ishan S.
Date: 22nd April 2024
Objective: Passing Array as Function Paramter 
*/

#include <stdio.h>

int func1(int arr[2] ){

    for(int i = 0 ; i < 2; i++){
        printf("The value at %d is: %d \n", i, arr[i]);
    }

    return 0;
}

int func2 (int * arr){

    for (int i =0; i<2;i++){
        printf("The value at %d is: %d \n", i,arr[i]);
    }

    // *(arr + 2) = 86587 (This will change the value of the array at index + 2 i.e 2nd Index location in the given array)

    return 0;

}

int func3_multidim_array(int arr[2][2]){

    for (int i =0; i < 2; i++){
        for(int j =0; j < 2; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(){

    int arr1[2] = {23, 24};
    int arr[2] = {25, 26};
    int multi_dim[2][2] = {{12,13}, {14,15}};

    func1(arr1);
    func2(arr);
    func3_multidim_array(multi_dim);

    return 0;
}
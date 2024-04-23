/*
Passing Array to the Function
*/

/*
It can be achieved by two ways:
1. First Method: By declaring array int func1(int arr1[])

int funct1(int arr[]){
    int sum =0 //initialize the variable
    for (int i=0; i< n;i++){

        sum = sum + arr[i]
    }

    int average = sum/n

    return average;

}

int main(){
    int arr[] = {1,2,3}
    func1(arr[])
}

2. Through pointer: int func1(int * arr): By passing arrays base address to the function

Now, as we discussed arr always points to that address from where the first element is stored. 

int func1(int *arr){

    //Now de-referencing using *
    //Concept of Pointer Arithemetic
    // *(arr) -> arr[0] -> 1000
    // *(arr + 1) -> arr[1] -> 1000 + 2 or 4(Depending on the architecture)

}

int main(){
    int arr = {1,2,3,4}
    func1(arr)
    return 0;
}
*/
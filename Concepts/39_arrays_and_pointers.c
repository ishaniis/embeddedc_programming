/*
Arrays and Pointers connection
*/

/*
int arr[10] -> Integer Array 
*/

/*
We can assign a given array to a pointer

int * ptr = arr is equivalent to int * ptr = &arr[0]
*/

/*
arr -> pointer to arr[0]

Similarly, for a given array arr + i is a pointer to arr[i]
*/

/*
So, arr[0] is at 1000 address

arr + 1 = 1004

arr + 2 = 1008

arr is the pointer to the array
*/

/*
Address: arr + i = (Address at a arr[0]) + (Sizeof * i)
*/
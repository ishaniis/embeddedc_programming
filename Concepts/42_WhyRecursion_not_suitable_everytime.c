/*
Why recursion is not suitable for all occassions
*/

/*
In recursive, calls get increased exponentially, as demonstrated in the factorial. 
*/

/*
fib(22) -> (fib(21)) * (fib(20))
- fib(21) -> (fib(20)) * fib(19)
- fib(20) -> fib(19) * fib(18)
- - fib(19) -> fib(18) * fib(17)
- - fib 
*/

/*
It's the call of the programmer to understand and answer, where to use recursion or incremental approach for a given instant. 
In case of factorial, recursion saves a lot of steps. 
*/
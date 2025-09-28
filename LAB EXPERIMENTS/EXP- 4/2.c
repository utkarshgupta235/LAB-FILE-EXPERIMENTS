// 	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>
int globalVar = 10; // Global variable
void function1() {
    int localVar = 20; // Local variable
    printf("Inside function: Local Variable = %d\n", localVar);
}
void function() {
    function1();
    printf("Trying to access localVar here will cause an error\n");
    // printf("Outside function: Local Variable = %d\n", localVar); 
    printf("Inside function: Global Variable = %d\n", globalVar); 
    // Accessing global variable
}
int main() {
    function();
    return 0;
}
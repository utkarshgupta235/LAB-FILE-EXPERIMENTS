// 	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>
int globalVar = 10;
void function1() {
    printf("Function 1: Global Variable = %d\n", globalVar);
}
void function2() {
    globalVar += 5;
    printf("Function 2: Global Variable after increment = %d\n", globalVar);
}
int main() {
    printf("Main Function: Initial Global Variable = %d\n", globalVar);
    function1();
    function2();
    printf("Main Function: Global Variable after function calls = %d\n", globalVar);
    return 0;

}

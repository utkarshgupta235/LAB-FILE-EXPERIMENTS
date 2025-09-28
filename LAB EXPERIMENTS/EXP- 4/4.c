// 4.	Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>
void function() {
    static int staticVar = 0; // Static local variable
    staticVar++;
    printf("Static Variable = %d\n", staticVar);
}
int main() {
    function(); 
    printf("Call 1\n");
    function(); 
    printf("Call 2\n");
    function(); 
    printf("Call 3\n");
    return 0;
}
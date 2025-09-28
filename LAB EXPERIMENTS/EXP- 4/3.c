//	Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>
int main() {
    int x=10; // Variable in main block
    printf("Main block: x = %d\n", x);
    {
        int y=20; // Variable in inner block
        printf("Inner block: y = %d\n", y);
        printf("Inner block: x = %d\n", x); 
    }
    // Trying to access y here will cause an error
    // printf("Main block: y = %d\n", y);
    return 0;

}

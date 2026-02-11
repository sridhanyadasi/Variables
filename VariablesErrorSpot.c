/*
Take three int variables a, b, c.
Declare them using incorrect syntax and observe the result.
*/
#include<stdio.h>
void main()
{
    int a, int b, int c;  // incorrect declaration syntax

    a = b = c = 10;       // value assignment statement

    printf("%d\n", a);   // prints a value
    printf("%d\n", b);   // prints b value
    printf("%d\n", c);   // prints c value
}

/*
Error:
Compilation Error

Reason:
In C, the data type is written only once in a declaration.
Multiple variables must be separated by commas, not repeated with the data type.
*/

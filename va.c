/*
Take three int variables a, b, c.
Assign values using a = b = c = 10 and print them.
*/
#include<stdio.h>
void main()
{
    int a, b, c;    // one int datatype used for three variables
    a = b = c = 10; // same value assigned to all variables

    printf("%d\n", a); // prints value of a
    printf("%d\n", b); // prints value of b
    printf("%d\n", c); // prints value of c
}

/*
Output:
10
10
10

Reason:
All variables are declared properly and chain assignment works from right to left.
*/

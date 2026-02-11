/*
Take three int variables and print them in the same line using tab space.
*/
#include<stdio.h>
void main()
{
    int a, b, c; // three int variables

    a = 10;      // assigning value to a
    b = 10;      // assigning value to b
    c = 10;      // assigning value to c

    printf("%d\t", a); // prints a with tab
    printf("%d\t", b); // prints b with tab
    printf("%d\t", c); // prints c with tab
}

/*
Output:
10    10    10

Reason:
\t gives horizontal space, so all values appear on the same line.
*/

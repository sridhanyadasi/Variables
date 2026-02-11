/*
Take three variables and assign values using a = b = c = 5
without declaring b and c properly.
*/
#include<stdio.h>
void main()
{
    int a = b = c = 5; // b and c are not declared

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}

/*
Error:
Compilation Error

Reason:
b and c are used without declaration.
All variables must be declared before using them.
*/

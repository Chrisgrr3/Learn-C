#include <stdio.h>
int foo(int bar);
void print_big(int number);
// Functions are powerful, but limited in C. They can:
// Either receive a fixed or varaible amount of arguments.
// Return either one value or no value.

// Arguments are copied by value to functions, meaning we can't change the arguments to effect their
// value outside of the function and will instead need to use pointers. More on that later.

// Functions are defined with the following syntax:

// The foo function receives on argument (bar), multiplies its value by 2, and returns the result.

// In C, functions must be defined before they're used in code. They can either be declared first and then
// implemented later on using a header file or in the beginning of the C file.
// By using 'void' before the name of the function, we can define a function that does not return a value.
void main()
{
    foo(1);
    int array[] = {1, 11, 2, 22, 3, 33};
    int i;
    for (i = 0; i < 6; i++)
    {
        print_big(array[i]);
    }
}

int foo(int bar)
{
    return bar * 2;
}

void print_big(int number)
{
    if (number > 10)
    {
        printf("%d is big\n", number);
    }
}
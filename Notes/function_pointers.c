#include <stdio.h>
#include <stdlib.h> // We import this for qsort()
int compare(const void *left, const void *right)
{
    return (*(int *)right - *(int *)left);
    // go back to ref if this seems complicated: http://www.cplusplus.com/reference/cstdlib/qsort/
}
void someFunction(int arg)
{
    printf("This is someFunction being called and arg is: %d\n", arg);
    printf("Whoops leaving the function now!\n");
}
void main()
{

    // Why use a pointer to call a function when we can simply call a function by its name?
    // Take a sort for example. How can you choose between sorting in ascending or descending order? With function pointers.

    // Function Pointer Syntax
    void (*pf)(int);
    // Above, *pf is the pointer to a function, void is the return type of that function, and int is the argument type for that function.
    // Now, let's insert pointer into to function pointer:
    // char *(*pf)(int *);
    // Here, *pf is the function pointer, char* is the return type for that function, and int* is the type of the argument.
    // Let's look at this example:
    pf = &someFunction;
    printf("We're about to call someFunction() using a pointer!\n");
    (pf)(5);
    printf("Wow that was cool. Back to main now!\n\n");
    int (*cmp)(const void *, const void *);
    cmp = &compare;

    int iarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    qsort(iarray, sizeof(iarray) / sizeof(*iarray), sizeof(*iarray), cmp);

    int c = 0;
    while (c < sizeof(iarray) / sizeof(*iarray))
    {
        printf("%d \t", iarray[c]);
        c++;
    }
    // Let's remember, we use function pointers so that we can flexibly use libraries.
}

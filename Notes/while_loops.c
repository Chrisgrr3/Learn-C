#include <stdio.h>
void main()
{
    // These are similar to for loops but with less functionality and only execute while the condition is true.
    // The following code will execute exactly 10 times:
    int n = 0;
    while (n < 10)
    {
        n++;
    }
    // If the condition always evaluates to true, we will create an infinite loop.

    // Loop directives

    // The break and continue directives are user in conjunction with all loop types in C.
    // Below, we see a loop halting after 10 loops using break:
    int m = 0;
    while (1)
    {
        m++;
        if (m == 10)
        {
            break;
        }
    }
    // With continue, we cause the following commands in an iteration to be skipped and a new iteration starts.
    int p = 0;
    while (p < 10)
    {
        p++;
        if (p % 2 == 1)
        {
            continue;
        }
        printf("The number %d is even.\n", p);
    }
    // The example below uses a while loop fitted with break and continue directives.
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10)
    {
        if (array[i] < 5)
        {
            i++;
            continue;
        }
        else if (array[i] > 10)
        {
            break;
        }
        printf("%d\n", array[i]);
        i++;
    }
}
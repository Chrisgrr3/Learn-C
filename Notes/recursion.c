#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y);
void main()
{
    // Recursion is when a function contains within it a call to itself. I can results in very neat and elegant code, but can result in a very large amount of memory being used if the recursion gets too deep.
    // Recursion is used in:
    // Walking recursive data structures such as linked lists, binary trees, etc.
    // Exploring possible scenarios in games such as chess
    // Recursion consists of two parts:
    // A terminating case that indicates when the recursion will finish
    // A call to itself that must make progress towards the terminating case.

    // View the multiply function for an example of recursion.
    printf("3 times 5 is %d", multiply(3, 5));
}
unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1)
    {
        return y;
        // This is the terminating case
    }
    else if (x > 1)
    {
        return y + multiply(x - 1, y);
        // This is the recursive step
    }
    return 0;
    // This is a catch scenario and occurs when x is zero.
}

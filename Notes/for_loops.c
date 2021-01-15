#include <stdio.h>
void main()
{
    // For loops allow us ability to create a code block that runs multiple times + require an iterator variable.
    // For loops give the following functionality:
    // Initialize iterator varaible using initial value.
    // Check if the iterator has reached its final value.
    // Increase the iterator.

    // To iterate on a block 10 times and add up each number in an array, we code the following:
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    printf("The sum of the array is %d\n", sum);

    // Here is an example using a for loop to find the factorial of an array:
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factorial = 1;
    int i;

    /* calculate the factorial using a for loop  here*/
    for (i = 0; i < 10; i++)
    {
        factorial *= array[i];
    }
    printf("10! is %d.\n", factorial);
}
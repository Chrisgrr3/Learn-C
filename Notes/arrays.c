#include <stdio.h>

// Arrays can hold more than one value under the same variable name, organised by index.
// Arrays are defined as follows:
int numbers[10];

// To access a number from the array, we use the same syntax. Above, we created an array of size 10,
// with index values from 0 to 9. numbers[10] is not a value, even thought the size is 10.

// Arrays may only have on type of variable, as they're implemented as a sequence of values in the
// computer's memory.

// Let's run through an example using arrays:
int main() {
    int average;
    int grades[3];
    grades[0] = 80;
    grades[1] = 88;
    grades[2] = 92;
    
    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);
}
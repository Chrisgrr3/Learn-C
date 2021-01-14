#include <stdio.h>
// Integers: Can be either positive or negative and defined using char, int, short, long or long long.

// Unsigned integers: Whole numbers that are only positive. Defined using unsigned char, unsigned int, 
// unsigned short, unsigned long or unsigned long long.

// Floating point numbers: Real numbers (numbers with fractions). Defined using float and double.

//Structures: More on this later.

// Variable types are defined by their bounds.

// C does not have a boolean type, and is defined as follows:

#define Bool char
#define False 0
#define True 1

// Arrays of characters define strings.

// Defining Variables

// Numbers are defined with the type int

// To define the variables foo and bar, we use this syntax:
int foo;
int bar = 1;
// foo can be used, but we don't know what is in it because we did not initialize it.
// bar contains the number 1.

// We can now do mathematical operations:
int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;
    sum = a + b + c;
    printf("The sum of a, b, and c is %f", sum);
    return sum;
}
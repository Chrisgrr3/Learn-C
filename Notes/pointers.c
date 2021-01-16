#include <stdio.h>
void main()
{
    // Pointers are used for several reasons in C, such as:
    // Strings
    // Dynamic memory allocation
    // Sending function arguments by reference
    // Building complicated data structures
    // Pointing to functions
    // Building special data structures (Trees, Tries, etc...)

    // A pointer is a simple integer varaible that holds a memory address pointing to a value instead of holding the actual value itself.
    // Computer memory sequentially stores data and a pointer points to a specific part of the memory. We can use pointers to point to a large amount of memory - depending on how much we decide to read from that point on.

    // Strings as pointers

    // The following line:
    char *name = "John";
    // Does three things:
    // Allocates a local (stack) varaible called name, which is a pointed to a single character.
    // Causes the string "John" to appear somewhere in the program memory after it is compiled and executed.
    // Initializes the name argument to point to where the "J" character resides at (which is followed by the rest of the string in the memory).

    // If we try to access the name variable as an array, it'll work and will return the ordinal value of the character "J", because the name variable actually points exactly to the beginning of the string.
    // Because memory is sequential, if we move ahead in the memory to the next character, we'll get the next character in the string, until we reach the end of the string, marked with a null terminator (\0).

    // Dereferencing

    // This is the act of referring to where the pointer points, instead of the memory address. This is already done in arrays.
    // For example:
    // [0] access the first item of an array. Because arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer.
    // Dereferencing a pointer is done using the asterisk operator *.
    // To create an array that will point to a different variable in our stack, we can write the following:
    int a = 1;
    int *pointer_to_a = &a; //The & operator points to the memory location of the a variable.
    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);
    // Above, we used the & operator to point to the variable a, then referred to it using the dereferencing operator.
    // We can also change the contents of the dereferenced variable using the below code:
    a += 1;
    printf("The value of a is now %d\n", a);

    *pointer_to_a += 1;
    printf("The value of a is now %d\n", a);
}
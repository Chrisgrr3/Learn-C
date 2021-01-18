#include <stdio.h>
void main()
{
    // Unions are similar to C structures, however, instead of containing multiple variables each with their own memory, a Union allows for multiple names to the same variable. The names allow for the memory to be treated as different types (and the size of the union will be the size of the largest type including any padding the compiler might decide to give it).
    // If you wanted to read a variable's memory in different ways, like reading an integer one byte at a time, you could write as follows:
    union intParts
    {
        int theInt;
        char bytes[sizeof(int)];
    };
    // This allows us to look at each byte individually without casting a pointer and using pointer arithmetic:
    union intParts parts;
    parts.theInt = 5968145; // This is an arbitrary number greater than 255 (1 byte)
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n", parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);

    // vs

    int theInt = parts.theInt;
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n", theInt, *((char *)&theInt + 0), *((char *)&theInt + 1), *((char *)&theInt + 2), *((char *)&theInt + 3));

    // or with array syntax (a bit nicer sometimes)

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n", theInt, ((char *)&theInt)[0], ((char *)&theInt)[1], ((char *)&theInt)[2], ((char *)&theInt)[3]);
    // Combining this with a structures allows the creation of a "tagged" union that can be used to store multiple different types, one at a time.
    // For example, we may have a "number" struct, but we wouldn't want to use something like this:
    // struct operator{
    //     int intNum;
    //     float floatNum;
    //     int type;
    //     double doubleNum;
    // };
    // Because the program has a lot o them and it takes a bit too much memory for all of the variables, so we could use:
    // struct operator
    // {
    //     int type;
    //     union
    //     {
    //         int intNum;
    //         float floatNum;
    //         double doubleNum;
    //     } types;
    // };
    // With this, the size of the struct is the size of the int type + the size of the largest type in the union (the double). This isn't a huge gain, but the concept can be applied to similar structs.
    // If we don't give the union a name then it's members are accessed directly from the struct:
    struct operator
    {
        int type;
        union
        {
            int intNum;
            float floatNum;
            double doubleNum;
        };
    };

    // operator op;
    // op.type = 0; //int
    // intNum is part of the union, but since it isn't named we can access it directly off the struct itself.
    // op.intNum = 352;

    // Another feature that may be more useful is when we always have multiple variables of the same type, and want to be able to use both names (for readability) and indexes (for ease of iteration), in which case we would do as follows:
    union Coins
    {
        struct
        {
            int quarter;
            int dime;
            int nickel;
            int penny;
        };
        // An anonymous struct acts the same as an anonymous union, members are on the outer container.
        int coins[4];
    };

    // Above, we see that there's a struct containing the four common coins in the US. Because the union makes the variables share the same memory the coins array matches with each int in the struct (in order):
    union Coins change;
    // for (int i = 0; i < sizeof(change) / sizeof(int); i++)
    // {
    //     scanf("%i", change.coins + i); // This is bad code. The input is always suspect
    // }
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n", change.quarter, change.dime, change.nickel, change.penny);
}

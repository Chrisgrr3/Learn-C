#include <stdio.h>
void main()
{
    // There are multiple arithmetic operations that can be applied on C pointers: ++, --, -, +

    // Incrementing a Pointer with(++)

    // The ++ operation increases the value of a variable, but in this case, we have a pointer and doing this operation will increase the address in the memory that pointer points to.
    // Here is an example:
    int intarray[5] = {10, 20, 30, 40, 50};

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
    }
    int *intpointer = &intarray[3];
    // This points to the 4th element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer);
    // This prints the address of the 4th element
    intpointer++;
    //This increase's the pointer's address so it points to the 5th element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    // Decreasing a Pointer with (--)

    // We can decrease the address pointed-to by one using the decrement operator (--). Here is an example:
    intpointer--;
    intpointer--;
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    // Adding Pointers with (+)

    // With this operand, we can add whatever number we wish to the memory address.

    intpointer += 2;
    // This will increase the pointer's address by two.
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    // Subtracting Pointers with (-)

    // With this operand, we can deduct whatever number we wish from the memory address.
    intpointer -= 3;
    // This will decrease the pointers address by three.
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    // We can also make comparisons between memory addresses using <, >, ==, and !=
}

#include <stdio.h>
void main()
{
    // Bitmasking is the process of storing data as bit, instead of storing it as chars/ints/floats. This is very useful for storing certain types of data compactly and efficiently.
    // Bitmasking is based on boolean logic, which is the manipulation of 'true' (1) and 'false' (0) through logical operations(take 0s and 1s as their argument).
    // We are concerned with the following operations:
    // // NOT a - the final value is the opposite of the input value (1 -> 0, 0 -> 1)
    // // a AND b - if both values are 1, the final value is 1, otherwise the final value is 0
    // // a OR b - if either value is 1, the final value is 1, otherwise the final value is 0
    // // a XOR b - if one value is 1 and the other value is 0, the final value is 1, otherwise the final value is 0

    // One of these true/false values is a bit. Primitives in C (int, float, etc.) are made up of some number of bits, where that number is a multiple of 8. For example, an int may be at least 16 bits in size, where a char may be 8 bits, AKA a byte. C guarantees certain primitives are at least some number of bytes in size.
    // Bit masks are often used when setting flags, which are certain values that can be in two states, such as 'on/off' and 'moving/stationary'/

    // Setting bit n

    // As simple as ORing the value of the storafe variable with the value with the value 2^n
    // storage |= 1 << n;
    // As an example, here's the setting of bit 3 where storage is a char (8 bits):
    01000010 | 00001000 == 01001010;
}

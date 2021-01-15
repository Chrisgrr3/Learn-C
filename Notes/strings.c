#include <stdio.h>

void main()
{
    // In C, strings are actually an array of characters. We will use pointed to a character array
    // to define simple strings, in the following way:
    // char * name = "John Smith";
    // This creates a string that can only be used for reading. To define a string that can be manipulated,
    // we use the following method:
    char john[] = "John Smith";
    /* which is the same as */
    char smith[11] = "John Smith";
    // This difference is that this notation allocates an array variable so that it can be manipulated.
    // Empty brackets notation [] tells the compiler to automatically calculate the size of the array.
    // This is the same as allocating it explicitly, adding one to the length of the string. One must be
    // added for the string termination, which is a special character that indicates the end of a string.
    // This is needed because the program doesn;t know the length of the string, only the compiler does.

    // String formatting with printf

    // To format a string together with another string, we do the following:
    // char *name = "John Smith";
    // int age = 27;
    // printf("%s is %d years old.\n", name, age);

    // String Length

    // The 'strlen' function returns the length of the string that is passed in as an argument.
    char nick[] = "Nick Cannon";
    printf("%d\n", strlen(nick));

    // String comparison

    // The function strncmp compares two strings, returning 0 if they are equal or a different number if
    // they are not. The argument takes the two strings to be compared and the max comparison length.
    char *name1 = "John";

    if (strncmp(name1, "John", 4) == 0)
    {
        printf("Hello, John!\n");
    }
    else
    {
        printf("You are not John. Go away.\n");
    }

    // String concatenation

    // The 'strncat' function appends the first n characters of the src string to the destination string.
    // n is min(n, kength(src)); The arguments passed are the destination string, source string,
    // and n - the max number of characters to be appended.
    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 20);
    printf("%s\n", dest);

    // Example:

    char name[100];
    char * first_name = "John";
    char last_name[] = "Doe";
    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0)
    {
        printf("Done!\n");
    }
    name[0] = '\0';
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);
    printf("%s\n", name);
    return 0;
}
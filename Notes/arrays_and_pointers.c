#include <stdio.h>
#include <stdlib.h>
void main()
{
    // We learned that a pointer to a given data type can store the address of any variable of that particular data type.
    // The following code creates a pointer varaible pc that stores the address of the character variable c:
    char c = 'A';
    char *pc = &c;
    // c is a scalar variable that stores a single value. Arrays can hold multiple values of the same data type in a contiquously allocated memory block, and we can have pointers to arrays as well.
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    // char *pvowels = vowels;
    // int i;
    // Now, let's print the addresses:
    // for (i = 0; i < 5; i++)
    // {
    //     printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    // }
    // Now, let's print the values:
    // for (i = 0; i < 5; i++)
    // {
    //     printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    // }
    // Because this is a character array, each element occupies one byte so that the consecutive memory addresses are separated by a single byte.
    // pvowels has the address of the vowels array, and pvowels + i is a valid operation, but in general, it may not always be meaningful.

    // Dynamic Memory Allocation for Arrays

    // We can traverse an array using pointers and can also dynamically allocate(contiguous) memory using blocks pointers. We can therefore combine these two aspects to dynamically allocate memory for an array as seen in the following code:
    // int n = 5;
    // char *pvowels = (char *)malloc(n * sizeof(char));
    // int i;

    // pvowels[0] = 'A';
    // pvowels[1] = 'E';
    // *(pvowels + 2) = 'I';
    // pvowels[3] = 'O';
    // *(pvowels + 4) = 'U';

    // for (i = 0; i < n; i++)
    // {
    //     printf("%c ", pvowels[i]);
    // }

    // printf("\n");

    // free(pvowels);

    // Above, we allocated five contiguous bytes of memory to store five characters. We then used array notations to traverse the blocks of memory as if pvowels was an array, even though pvowels is a pointer.
    // How is this useful? When declaring an array, we must know the number of elements it will contain beforehand. Therefore, in som cases, it may be that the space allocated for an array is either less than the desired space or more.
    // However, with dynamic memory allocation, we can allocate just as much memory as required by a program and unused memory can be freed as soon as it is no longer needed by using the free() function.
    // On the down side, if we use dynamic memory allocation, we much responsibly call free() wherever relevant. Otherwise, memory leaks would occur.

    // Lets look at the dynamic memory allocation for a two-dimensional array, which can be generalized to n-dimensions in a similar way.This requires a pointer to a pointer.
    int nrows = 2;
    int ncols = 5;
    int i, j;

    // First, we allocate memory for nrows pointers
    char **pvowels = (char **)malloc(nrows * sizeof(char *));

    // Now, for each row, we must allocate memory for ncols elements
    pvowels[0] = (char *)malloc(ncols * sizeof(char));
    pvowels[1] = (char *)malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++)
    {
        for (j = 0; j < ncols; j++)
        {
            printf("%c ", pvowels[i][j]);
        }

        printf("\n");
    }
    // Free individual rows
    free(pvowels[0]);
    free(pvowels[1]);

    // Free the top-level pointer
    free(pvowels);
}

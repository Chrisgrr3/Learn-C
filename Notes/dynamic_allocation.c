#include <stdio.h>
#include <stdlib.h>
void main()
{
    // Dynamic allocation of memory allows the building of complex data structures such as linked lists. Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the program.
    // To allocate a chunk of memory dynamically, we need a pointer ready to store to location of newly allocated memory. The pointer gives us access to the memory that was allocated to us, and that pointer can also be used to free memory once we are done using it.
    // Let's first define the person structure:
    typedef struct
    {
        char *name;
        int age;
    } person;
    // To allocate a new person in the myperson argument, we do the following:
    person *myperson = (person *)malloc(sizeof(person));
    // This tells the compuler to dynamically allocate just enough to hold a person struct in memory, and returns a pointer to the newly allocated data.
    // Sizeof is not an actual function, and the compiler interprets and translates it to the actual memory size of the person struct.
    // To access the person's member, we do the following:
    myperson->name = "John";
    myperson->age = 27;
    // Once we're done using the dynamically allocated struct, we can release it using free:
    free(myperson);
    // Free does not delete the myperson variable, and simply releases the data it points to.
    // Myperson will still point to somewhere in memory - but after calling myperson we won't have access to that area anymore. We must not use the pointer again until we allocate new data using it.
    // Below we dynamically allocate a point structure:

    typedef struct
    {
        int x;
        int y;
    } point;
    point *mypoint = (point *)malloc(sizeof(point));

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);
}
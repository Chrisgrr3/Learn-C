#include <stdio.h>
typedef struct
{
    int x;
    int y;
} point;
typedef struct
{
    char *name;
    int age;
} person;
void birthday(person *p);
void addone(int *n);
void move(point *p);
void main()
{
    // Functions arguments are passed by value, meaning they're copied in and out of functions. If we copy pointers to values instead of the values themselves, we can give functions control over varaibles and structures of parent functions instead of just a copy of them.
    // The function addone increments a number by one:
    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);
    // The function receives a pointer to the variable n as an argument and then it can manipulate it because it knows where it is in the memory.
    // In the addone function, we must pass a reference to the variable n and not the variable itself so that the function knows the address of the variable and not just a copy of the variable itself.

    // Pointers to structures

    // If we define the function move to move a point forward in both x and y directions, we can send a pointer to the function of the point structure instead of sending two pointers (check the move function).

    // The top move function can be reduced using the shorthand syntax of the move function below it.
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);
}
void addone(int *n)
{
    (*n)++;
};
// void move(point *p)
// {
//     (*p).x++;
//     (*p).y++;
// }
void move(point *p)
{
    p->x++;
    p->y++;
}
void birthday(person *p)
{
    p->age++;
}
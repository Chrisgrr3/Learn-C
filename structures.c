#include <stdio.h>

void main()
{
    // Structures are special, large variables that contain several named variables inside. They're the basic foundation for objects and classes in C.
    // Structures are used for:
    // Serialization of data
    // Passing multiple arguments in and out of functions through a single argument
    // Data structures such as linked lists and binary trees.

    // The most basic structures are points, which contain an x and y variable. The following code defines a point:
    struct point
    {
        int x;
        int y;
    };
    // We can now define and use a new point. Assume the function draw() takes a point and draws it on a screen. Without structs, we would need to pass in two arguments - each for every coordinate.
    int x = 10;
    int y = 5;
    // draw(x, y);

    // With structs, we can pass a point argument:
    struct point p;
    p.x = 10;
    p.y = 5;
    // draw(p);
    // We use the dot . operator to access the struct's variables.

    // Typedefs

    // These let us define type with a different name - which comes in handy when dealing with structs and pointers.
    typedef struct
    {
        int x;
        int y;
    } point;
    // We can now define a new point as follows:
    point o;
    // A structure can also hold pointers, which allow them to hold strings or pointers to other structures as well. For example:
    typedef struct
    {
        char *brand;
        int model;
    } vehicle;
    // Because brand is a char pointer, the vehicle type can contain a string.
    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;
}
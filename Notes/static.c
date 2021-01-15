#include <stdio.h>
int runner();
static void fun(void);
void main()
{
    // The keyword static can be used with variables and functions.

    // By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to the file containing them, which allows them to be accessed anywhere inside a file.
    // Check the runner function for an example where we count the runners participating in a race.
    printf("%d ", runner());
    printf("%d ", runner());

    // If count wasn't static, its value wouldn't be updated because it would be removed from memory as soon as the function completed.

    // Static functions

    // Functions are global in C by default. Declaring a function as static would therefore reduce its scope to the file that contains it.
    // Check the 'fun' function for its syntax.

    // Static vs Global

    // Static variables have scope over the file containing them, making them accessible only inside a given file, while global variables can be access outside the file as well.
}
int runner()
{
    static int count = 0;
    count++;
    return count;
}
static void fun(void)
{
    printf("I am a static function.");
}
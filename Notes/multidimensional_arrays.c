#include <stdio.h>
// In C, we can create and utilize multi-dimesional arrays. here is the general form of its declaration:
// type name[size1][size2]...[sizeN];

// Here is a more concise example:
int foo[1][2][3];
// or
char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}};

// The type can be any C data type, and the array name will be a valid identifier, or variable.
// A two dimensional array can be considered a table with [x] rows and [y] columns.
// Each element in a two-dimensional array array is identified by an element name in the form a[i][j].

// Below is an example of an array with 3 rows and 4 columns:
int a[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}};
// We can also obscure the inside braces and define our array as such:
int b[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

// To access an element in a two-dimensional array:
// int val = b[2][3];
// This gives us the 4th element from the 3rd row in the array.

// Now, lets loop through a multidimensional gradebook. Subject 0 is mathematics, and subject 1 is physics.
int main() {
    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }
        average = average / 5;
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}
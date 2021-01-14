#include <stdio.h>
void guessNumber(int guess) {
    // TODO: write your code here
    if(guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!");
    }
}
void main()
{

    // Here's the general form of decion making structures in C:
    int target = 10;
    if (target == 10)
    {
        printf("Target is equal to 10\n");
    }

    // The if statement lets us check if an expression is true or false, and execute different code as result.
    // The == operator evaluate whether two varaibles are equal, and inequality operators can also be used.

    int foo = 1;
    int bar = 2;

    if (foo < bar)
    {
        printf("foo is smaller than bar.\n");
    }
    // The else keyword allows use to execute code when our expression evaluates to false.
    else
    {
        printf("foo is greater than bar.\n");
    }
    // If there is more than two outcomes to choose from, we can chain "else if" statement together.

    // We can also nest if and else statements:
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80)
    {
        if (peanuts_eaten < max_peanut_limit)
        {
            printf("Take as many peanuts as you want!\n");
        }
    }
    else
    {
        if (peanuts_eaten > peanuts_in_jar)
        {
            printf("You can't have anymore peanuts!\n");
        }
        else
        {
            printf("Alright, just one more peanut.\n");
        }
    }
    // Two or more expression can be evaluated with logical operators to check if both expressions
    // evaluate to true, or just one of them. To check if both evalaute to true,
    // we use the AND operator &&. To check if at least one is true, we use the OR operator ||.

    foo = 1;
    bar = 2;
    int moo = 3;
    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.\n");
    }
    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.\n");
    }
    // The NOT operator ! can also be used:
    target = 9;
    if (target != 10) {
        printf("Target is not equal to 10.\n\n");
    }
    printf("Here is an example using if and else statements(See the guessNumber() function at the top)\n");
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
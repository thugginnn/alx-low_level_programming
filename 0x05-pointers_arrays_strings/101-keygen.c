#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for program 101-crackme.
 * Return: 0 Always.
 */
int main(void)
{
    int r = 0, c = 0;
    time_t t;

    srand((unsigned int) time(&t));

    // Generate random valid passwords
    while (c < 2772)
    {
        r = rand() % 128;
        if ((c + r) > 2772)
            break;
        c += r;
        printf("%c", r);
    }

    // Print the remaining difference to reach 2772
    printf("%c\n", (2772 - c));

    return (0);
}

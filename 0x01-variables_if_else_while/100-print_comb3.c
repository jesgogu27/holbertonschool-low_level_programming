#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

    int a;
    int b;

    a = 48;
    b = 48;

    while (a < 58)
    {

        while (b < 58)
        {

            if ((b != a) && (a < b))
            {
                putchar(a);
                putchar(b);
                
                if ((b == 57) && (a == 56))
                {
                    putchar('\n');
                    break;
                }
                else 
                {
                    putchar(',');
                    putchar(32);
                }
            }
            b = b + 1;
        }

        a = a + 1;
        b = 48;

    }

    return (0);
}

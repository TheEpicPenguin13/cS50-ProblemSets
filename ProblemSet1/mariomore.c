/*
 * By John McAllister
 *
 * The solution for the more comfortable version of mario.
 *
 * This is basically the same as marioless, except that you add a gap of two,
 * then make the stairs the opposite way. You don't even have to make it have
 * two at the top!
 */

#include <stdio.h>
#include "cs50.h" // NOTE: If cs50.h is in your include path, or you are in the cs50 IDE, use the <> instead of quotes.

int height;

int main(void)
{
    // Check if height is in the right range (0-23)
    do {
        height = get_int("Height: ");
    } while(height < 0 || height > 23);

    // Print out the actual steps.
    int temp = height - 1;
    for (int i = 1; i <= height; i++)
    {
        for (int j = temp; j > 0; j--)
            printf(" ");
        for (int k = 0; k < i; k++)
            printf("#");
        for (int l = 0; l < 2; l++)
            printf(" ");
        for (int l = 0; l < i; l++)
            printf("#");
        temp--;
        printf("\n");
    }
}

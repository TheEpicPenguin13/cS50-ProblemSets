/*
 * Made by John McAllister
 *
 * Code for the less comfortable version of the mario problem.
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
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        temp--;
        printf("\n");
    }
}

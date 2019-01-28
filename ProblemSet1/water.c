#include <stdio.h>

#include "cs50.h" // NOTE: If cs50.h is in your include path, or you are in the cs50 IDE, use the <> instead of quotes.

// Function for calculating the amount of bottles is used a minute.
// returns 192 (ounces a minutes) * num of minutes / 16 (amount of ounces in a bottle)
int calculate(int minutes)
{
    return (192 * minutes) / 16;
}

int main(void)
{
    int minutes = get_int("Minutes: ");

    printf("Water Bottles: %i", calculate(minutes));
}

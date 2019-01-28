#include <stdio.h>
#include "cs50.h" // NOTE: If cs50.h is in your include path, or you are in the cs50 IDE, use the <> instead of quotes.

float change;

int getCoins(float change)
{
    int coins = 0;

    // Quarters
    while (change >= 0.25) {
        coins++;
        change -= 0.25;
    }
    // Dimes
    while (change >= 0.10) {
        coins++;
        change -= 0.10;
    }
    // Nickels
    while (change >= 0.05) {
        coins++;
        change -= 0.05;
    }
    // Pennies
    while (change >= 0.00) {
        coins++;
        change -= 0.01;
    }

    return coins;
}

int main(void)
{
    // Check if change inputted is non negative.
    do {
        change = get_float("Change: ");
    } while(change < 0);

    int coins = getCoins(change);

    printf("%i\n", coins);
}

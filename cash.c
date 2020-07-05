#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars = get_float("Change owed: ");
    int cents = dollars * 100;
    int penny = 0;
    int nickel = 0;
    int dime = 0;
    int quarter = 0;
    if(0 < dollars && dollars < 1)
    {
        while(cents > 25)
        {
            quarter = quarter + 1;
            cents - 25;
        }
        while(cents > 10)
        {
            dime = dime + 1;
            cents - 10;
        }
        while(cents > 5)
        {
            nickel = nickel + 1;
            cents - 5;
        }
        while(cents > 1)
        {
            penny = penny + 1;
            cents - 1;
        }
        int coins_num = penny + nickel + dime + quarter;
        printf("%i", coins_num);
    }
    else
    {
        main();
    }
}

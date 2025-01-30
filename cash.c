#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;

    // Prompt the user for change owed, in cents
    do
    {
        cents = get_int("Changes owed : ");
    }
    while (cents <= 0);

    // Quarters to give the customer
    int quarters = calculate_quarters(cents);
    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    // Subtract the value of those dimes from remaining cents
    cents = cents - (dimes * 10);

    // Calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);
    // Subtract the value of those nickels from remaining cents
    cents = cents - (nickels * 5);

    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those pennies from remaining cents
    cents = cents - (pennies * 1);

    // Sum the number of quarters, dimes, nickels, and pennies used
    int summary = (quarters + dimes + nickels + pennies);
    // Print that sum
    printf("%i\n", summary);
}

int calculate_quarters(int cents)
{
    // quarters to give the customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25; // suppose cents is 100, until it will be more than, equal to 25,
                            // quarter value will be added by 1
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // quarters to give the customer
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // quarters to give the customer
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    // quarters to give the customer
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

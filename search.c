#include <cs50.h>
#include <stdio.h>

// Linear search to find a given number from an array //

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50}; //an array of integers

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++) // 7 denotes the number of integers
    {
        if (numbers[i] == n) // it is going through the array of integers, starting from [0] i.e 20
        {
            printf("Found\n");
            return 0; // it indicates success and exit the program
        }
    }
    printf("Not Found\n");
    return 1; // exit the program with an error
}

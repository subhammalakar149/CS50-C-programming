#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase : ");

    int length = strlen(phrase); //gets the single characters of a string

    for (int i = 0; i < length - 1; i++)
    {
        // checking whether the string is in alphabetical order
        if (phrase[i] > phrase [i + 1])
        {
            printf("Not in alphabetical order.\n");
            return 0;
        }
    }
    printf("Alphabetical order!\n");
    return 0;
}

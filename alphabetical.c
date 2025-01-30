#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase : ");

    int length = strlen(phrase); //gets the single characters of a string

    for (int i = 0; i < length; i++)
    {
        printf("%i ", phrase[i]); // prints out the ASCII integer behind each character in the string
    }
    printf("\n");
}

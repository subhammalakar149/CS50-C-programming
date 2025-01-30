#include <cs50.h>
#include <stdio.h>
#include <string.h>

 // using linear search to check for strings //

int main(void)
{
    // An array of strings
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    // Search for string
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++) //6 denotes the total number of strings
    {
        if (strcmp(strings[i], s) == 0) // 'strcmp' checks whether the string input and the array string are similar or not
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

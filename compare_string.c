#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Compare strings
    if (strcmp(s, t) == 0) // if the strings are same 'strcmp' will return 0
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

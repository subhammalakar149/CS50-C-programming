#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // Copy string's address
    string t = s;
    /*
    // Capitalize first letter in string
    t[0] = toupper(t[0]);
    */
    // Capitalize first letter in string
    if (strlen(t) > 0) // 'strlen' is used to make t exist
    {
        t[0] = toupper(t[0]);
    }


    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

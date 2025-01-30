#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++) // this will count the total letters to input in the next follow through
    {
        if (s[i] >= 'a' && s[i] <= 'z') // this checks for each character in the string, whether they fall between lowercases a to z
        {
            printf("%c", s[i] - 32); // when -32 it results in uppercas version for each char, meaning if A is 97, then a would be 65, in ASCII diff between upper and lower is 32
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]); // when you./greet and add a string, it will print out hello, the string or arguement
    }
    else
    {
        printf("hello, world\n");
    }
}

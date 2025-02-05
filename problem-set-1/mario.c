#include <cs50.h>
#include <stdio.h>

void print_pyramid_row(int spaces, int bricks);
int main(void)
{
    // prompting the user for height

    int n;
    do
    {
        n = get_int("Height : ");
    }
    while (n <= 0 || n > 8);

    // prinitng the pyramids as per user's input

    for (int i = 0; i < n; i++)
    {
        print_pyramid_row(n - i, i + 1);
    }
}

// printing # rows adding 1 after each row count

void print_pyramid_row(int spaces, int bricks)
{
    // printing space before hashes

    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // printing hashes of the bricks after space

    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n"); // it will take the # + 1 to nex row
}

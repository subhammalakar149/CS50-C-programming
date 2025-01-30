#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b) // addresses of a & b are provided
{
    int tmp = *a; // Notice that variables are not passed by value but by reference
    *a = *b;
    *b = tmp;
}

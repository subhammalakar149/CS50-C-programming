#include <stdio.h>

int main(void)
{
    int n = 50; // n is stored in memory with value 50
    int *p = &n; // p is the pointer containing the value of n
    //printf("%p\n", n); // %p '&' shows the address of the value of n in memory, returns 0x0
    printf("%i\n", *p);
}

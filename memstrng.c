#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    string s = "HI!";
    printf("%p\n", s); // string s address is the address 'H' in "Hi!" in memory
    printf("%p\n", &s[0]); // notice that string s and char H have similar address
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    // this program will point each characters allocated memory address
    */
   char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1)); // s+1 = s[0]+1
    printf("%c\n", *(s + 2));
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /*
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3); //c 's stored value is being referred from c1, c2, c2
    */
   /*
   // ASCII codes represented by i
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3); // the letters from char c1, c2, c2 are printed with their respective binary numbers
    */

   /*
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    */

    string s = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); //s[0] to [3] are the placholders in the string, which gives the string output in ASCII code
}

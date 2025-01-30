#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Creating our own data type to store name and designated phone number

typedef struct //'struct' helps to create our own data type
{
    string name;
    string number;
}
person; // data type name

int main(void)
{
    person people[3]; // an array, notice we are calling 'people.name' & 'people.number' to store person and associated phone number

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949-468-2750";

    // Search for name
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0) // comparing two strings, input and array
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

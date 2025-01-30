#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt the user for text
    string text = get_string("Enter your text : ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // calculating avg. no. of letters & sentences per 100 words
    float L = 100 * (letters / words);
    float S = 100 * (sentences / words);

    // Compute the Coleman-Liau index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0, n = strlen(text); i < n;
         i++) // looping through the length of the string, incrementing in case it is either an
              // upper or lower case letter
    {
        if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int i = 0, n = strlen(text); i < n;
         i++) // incrementing each time we find a space after the string is completed,
              // started with 1 to start counting from first letter
    {
        if (text[i] == 32)
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentence = 0;
    for (int i = 0, n = strlen(text); i < n;
         i++) // search the entire text for full stops, exclamation marks, question mark & increment
    {
        if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            sentence++;
        }
    }
    return sentence;
}

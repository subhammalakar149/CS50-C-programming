#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calc_score(string words);

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // prompting for getting two words from user(s)
    string word1 = get_string("Player 1, your word? ");
    string word2 = get_string("Player 2, your word? ");

    // calculating the scores for each words given by the user(s)
    int score1 = calc_score(word1);
    int score2 = calc_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Winner : Player 1 !\n");
    }
    else if (score1 < score2)
    {
        printf("Winner : Player 2 !\n");
    }
    else
    {
        printf("It is a tie !\n");
    }
}

int calc_score(string words)
{
    int score = 0; // inititally the score will be zero

    // Getting the numbers for each character from the string
    for (int i = 0, len = strlen(words); i < len; i++)
    {
        if (isupper(words[i]))
        {
            score += POINTS[words[i] - 'A'];
        }
        else if (islower(words[i]))
        {
            score += POINTS[words[i] - 'a'];
        }
    }

    return score;
}

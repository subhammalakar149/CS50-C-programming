#include <cs50.h>
#include <stdio.h>


typedef struct //first, we create our own data type structure to store information and reuse when necessary
{
    string name;
    int votes;
} candidate;

int main(void)
{
    const int num_candidates = 3; // declaring a constant number of candidate variable int
    candidate candidates[num_candidates];

    candidates[0].name = "Carter";
    candidates[0].votes = 10;

    candidates[1].name = "Yuliia";
    candidates[1].votes = 12;

    candidates[2].name = "Inno";
    candidates[2].votes = 7;

    // Find highest number of votes
    int highest_votes = 0;
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes > highest_votes) // it will check until the third record for candidate.votes
        {
            highest_votes = candidates[i].votes; // the value will then be assigned on each itiration to compare votes
        }
    }

    // Print name of candidate with highest number of votes
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes == highest_votes) // since, highest vote is already assigned, i.e., 12 from last function call, here it will just pass the candidate.name against it
        {
            printf("%s\n", candidates[i].name);
            printf("%i\n", highest_votes);
        }
    }
}

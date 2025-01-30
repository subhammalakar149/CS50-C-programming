#include <stdio.h>
#include <cs50.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    /*
        // Scores
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
    */
/*
   //revised code

       // Get scores
    int scores[3]; //telling the memory to store 3 back to back variables
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
*/
/*
    //revised code 2.0
        // Get scores
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
*/

    // revised code 3.0

     // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores)); 
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i]; // since length is declared const 3, it will add back to back three numbers
    }
    return sum / (float) length; // this will return the average value to called program
}

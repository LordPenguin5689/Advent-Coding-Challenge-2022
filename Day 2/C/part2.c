#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    FILE *myFile;

    myFile = fopen("input.txt", "r");

    char line[4];
    char text[4];

    int score = 0;

    while (fgets(line, 4, myFile) != NULL) {

        //X means loss + 0 points
        if (strstr(line, "X")) {
            score += 0;

            //If they play rock, I must play scissors + 3 points
            if (strstr(line, "A")) {
                score += 3;
            }
            //If they play paper, I must play rock + 1 points
            else if (strstr(line, "B")) {
                score += 1;
            }
            //If they play scissors, I must play paper + 2 points
            else if (strstr(line, "C")) {
                score += 2;
            }
        }

        //Y means draw + 3 points
        else if (strstr(line, "Y")) {
            score += 3;

            //If they play rock, I must play rock + 1 point
            if (strstr(line, "A")) {
                score += 1;
            }
            //If they play paper, I must play paper + 2 points
            else if (strstr(line, "B")) {
                score += 2;
            }
            //If they play scissors, I must play scissors + 3 points
            else if (strstr(line, "C")) {
                score += 3;
            }
        }

        //Z means win + 6 points
        else if (strstr(line, "Z")) {
            score += 6;

            //If they play rock, I must play paper + 2 points
            if (strstr(line, "A")) {
                score += 2;
            }
            //If they play paper, I must play scissors + 3 points
            else if (strstr(line, "B")) {
                score += 3;
            }
            //If they play scissors, I must play rock + 1 points
            else if (strstr(line, "C")) {
                score += 1;
            }
        }
    }

    printf("%d\n", score);
}
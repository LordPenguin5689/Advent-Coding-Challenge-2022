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

        //If player plays rock + 1 point
        if (strstr(line, "X")) {
            score += 1;

            //Rock beats scissors + 6 points
            if (strstr(line, "C")) {
                score += 6;
            }
            //Rock draws Rock + 3 points
            else if (strstr(line, "A")) {
                score += 3;
            }
        } 

        //If player plays paper + 2 points
        else if (strstr(line, "Y")) {
            score += 2;

            //Paper beats rock + 6 points
            if (strstr(line, "A")) {
                score += 6;
            }
            //Paper draws paper + 3 points
            else if (strstr(line, "B")) {
                score += 3;
            }
        }

        //If player plays scissors + 3 points
        else if (strstr(line, "Z")) {
            score += 3;

            //Scissors beats paper + 6 points
            if (strstr(line, "B")) {
                score += 6;
            }
            //Scissors draws scissors + 3 points
            else if (strstr(line, "C")) {
                score += 3;
            }
        }
    }

    printf("%d\n", score);
}
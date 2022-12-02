#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //Initialize and open file.
    FILE *file;
    file = fopen("input.txt", "r");

    int highestTotal, currentTotal, text = 0;

    char line[20];

    //While loop saves each line of txt file to line string
    //and terminates when it reaches the end of the file
    while (fgets(line, 20, file) != NULL) {
        //convert str to int
        text = atoi(line);

        //If the line is blank, text will become 0.
        //So when text == 0 we know to move on to the next elf
        if (text == 0) {
            if (currentTotal > highestTotal) {
                highestTotal = currentTotal;
            }

            currentTotal = 0;
        }
        else {
            currentTotal = currentTotal + text;
        }

    }

    printf("%d\n", highestTotal);
}
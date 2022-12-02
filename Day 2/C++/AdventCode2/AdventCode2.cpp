// AdventCode2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <cstdlib>

int main()
{
    std::ifstream myFile("input.txt");

    std::string opponentsStrategy, myStrategy;

    int myScore = 0;



    for (std::string line; getline(myFile, line);) {
        opponentsStrategy = line.substr(0, 1);
        myStrategy = line.substr(2, 1);

        //I need to lose so points + 0;
        if (myStrategy.compare("X") == 0) {
            myScore = myScore + 0;


            //If they pick rock I must pick scissors, + 3 points
            if (opponentsStrategy.compare("A") == 0) {
                myScore = myScore + 3;
            }
            //If they pick paper I must pick rock, + 1 points
            else if (opponentsStrategy.compare("B") == 0) {
                myScore = myScore + 1;
            }
            //If they pick scissors I must pick paper, + 2 points
            else if (opponentsStrategy.compare("C") == 0) {
                myScore = myScore + 2;
            }
        }

        //I need to draw so + 3 points
        else if (myStrategy.compare("Y") == 0) {
            myScore = myScore + 3;


            //If they pick rock I need to pick rock + 1 points
            if (opponentsStrategy.compare("A") == 0) {
                myScore = myScore + 1;
            }
            //If they pick paper I need to pick paper + 2 points
            else if (opponentsStrategy.compare("B") == 0) {
                myScore = myScore + 2;
            }
            //If they pick scissors I need to pick scissors + 3 points
            else if (opponentsStrategy.compare("C") == 0) {
                myScore = myScore + 3;
            }
        }

        //I need to win so + 6 points
        else if (myStrategy.compare("Z") == 0) {
            myScore = myScore + 6;
    

            //If they pick rock I need to pick paper + 2 points
            if (opponentsStrategy.compare("A") == 0) {
                myScore = myScore + 2;
            }
            //If they pick paper I need to pick scissors + 3 points
            else if (opponentsStrategy.compare("B") == 0) {
                myScore = myScore + 3;
            }
            //If they pick scissors I need to pick rock + 1 points
            else if (opponentsStrategy.compare("C") == 0) {
                myScore = myScore + 1;
            }
        }
        
        myScore = myScore;
    }

    std::cout << myScore;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

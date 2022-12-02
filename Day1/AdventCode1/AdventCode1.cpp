// AdventCode1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>


int main()
{

	std::ifstream infile("input.txt");
	int temp = 0;
	int biggestTotal = 0;
	int currentTotal = 0;
	int secondHighestTotal = 0;
	int thirdHighestTotal = 0;


	for (std::string line; getline(infile, line);) {
		if (line == "") {
			temp = 0;

			//Sort 3 highest totals
			if (currentTotal > thirdHighestTotal) {
				thirdHighestTotal = currentTotal;

				if (currentTotal > secondHighestTotal) {
					thirdHighestTotal = secondHighestTotal;
					secondHighestTotal = currentTotal;

					if (currentTotal > biggestTotal) {
						secondHighestTotal = biggestTotal;
						biggestTotal = currentTotal;
					}
				}

			}
			else {
				//if current total is not in top 3, add it up.
				currentTotal = currentTotal + temp;
			}

			currentTotal = 0;
		}
		else {

			temp = std::stoi(line);

			//Sort 3 highest totals
			if (currentTotal > thirdHighestTotal) {
				thirdHighestTotal = currentTotal;

				if (currentTotal > secondHighestTotal) {
					thirdHighestTotal = secondHighestTotal;
					secondHighestTotal = currentTotal;

					if (currentTotal > biggestTotal) {
						secondHighestTotal = biggestTotal;
						biggestTotal = currentTotal;
					}
				}

				//Just because it is bigger than 3rd highest total doesn't mean there aren't more items to sum
				currentTotal = currentTotal + temp;
			}
			else {
				//if current total is not in top 3, add it up.
				currentTotal = currentTotal + temp;
			}
		}
		

		
		
	}

	if (currentTotal > thirdHighestTotal) {
		thirdHighestTotal = currentTotal;

		if (currentTotal > secondHighestTotal) {
			thirdHighestTotal = secondHighestTotal;
			secondHighestTotal = currentTotal;

			if (currentTotal > biggestTotal) {
				secondHighestTotal = biggestTotal;
				biggestTotal = currentTotal;
			}
		}

		currentTotal = 0;
	}


	std::cout << biggestTotal + secondHighestTotal + thirdHighestTotal;
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

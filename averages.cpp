/*	Filename: averages.cpp
 *	Devs: Micah Butler (princessjinifer)
 *	Created: 1-18-12
 *	Edited: 1-18-12
 *	It is used to calculate averages to algebra scores c:
 *	v.0.2 (alpha software)
 */

#include <iostream>
#include <sstream>
#include <math.h>

#define ARRAY_SIZE 5

using namespace std;

void inputScores();
void inputAverages();
void calculateAverages();

int algebraScores[ARRAY_SIZE];
float weeklyAverage;

// This class calculates the score of the users algebra lesson
class algebraAverage {
	double correctProblems, incorrectProblems;

	public:
		void calculateScore (double,double);
		int finalScore() {
			double numberNeedingRounding = ((correctProblems/incorrectProblems)+0.005)*100;
			return (numberNeedingRounding);}
};

void algebraAverage::calculateScore (double userInput_correctProblems_calculated, double userInput_incorrectProblems_calculated) {
	correctProblems = userInput_correctProblems_calculated;
	incorrectProblems = userInput_incorrectProblems_calculated;
}

int main() {
    int menuSelection;

//	The main menu of the program
    while (true) {
    	cout << " Main Menu\n" << "___________\n\n" << "1) I already have my lessons scores\n" << "2) I need to figure out what my scores are\n\n" << "Enter your selection: ";
        cin >> menuSelection;
        if (menuSelection == 1)
        {
            inputAverages();
            break;
        }
        if (menuSelection == 2)
        {
            inputScores();
            break;
        }
        else
        {
            cout << "\nI am sorry, but " << menuSelection << " is not a valid menu choice, try again please\n\n";
        }
    }
}

void inputAverages() {
//	Inputting the scores to get the averages
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
		cout << "\nEnter your score for day " << i+1 << " of 5: ";
		cin >> algebraScores[i];
	}
	calculateAverages();
}

void inputScores() {
   	algebraAverage userInput_combined;
   	double userInput_correctProblems, userInput_incorrectProblems;

//	Inputting problem counts to get the score
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "\nThis is for day " << i+1 << "\n";
		cout << "How many problems were correct? ";
		cin >> userInput_correctProblems;
		cout << "How many problems were there total? ";
		cin >> userInput_incorrectProblems;
		userInput_combined.calculateScore (userInput_correctProblems, userInput_incorrectProblems);
		cout << "You scored " << userInput_combined.finalScore() << "%\n";
		algebraScores[i] = userInput_combined.finalScore();
	}
	calculateAverages();
}

void calculateAverages() {
//	Calculating the average of entered scores from above
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		weeklyAverage = weeklyAverage + algebraScores[i];
	}
	weeklyAverage = weeklyAverage/5;
	cout << "\nThe average of your scores is " << weeklyAverage << "\n";
}

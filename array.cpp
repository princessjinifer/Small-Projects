// testing out arrays

#include <iostream>

using namespace std;

#define ARRAY_SIZE 5

int main ()
{
	int algebraScores[ARRAY_SIZE];
	float algebraAverage;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter your score for day " << i+1 << ": ";
		cin >> algebraScores[i];
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		algebraAverage = algebraAverage + algebraScores[i];
	}
	algebraAverage = algebraAverage/5;
	cout << "The average of your scores is " << algebraAverage << "\n";
	return 0;
}

/**
	CSCI101, CSCI101_M07_Lab01.cpp
	Purpose:  Calculate and display values based on student grades.

	@author Jonas McClure
	@version 1.0 02/26/2019

	Style Notes:  _underbars for local variables, and camelCase for function names.
*/

#include <iostream>
#include <iomanip>
#include <tuple>
using namespace std;

tuple <float, float, float, float, float> UserInput() {
	/**
	Gets the user input for each grade

	@param None. Simple call, no function input necessary.
	@return A tuple value of all the grades
*/
	float grades01, grades02, grades03, grades04, grades05;

	cout << "Please input the numerical grade value for five courses:  " << endl;
	cout << "Grade 1:  "; cin >> grades01;
	cout << "Grade 2:  "; cin >> grades02;
	cout << "Grade 3:  "; cin >> grades03;
	cout << "Grade 4:  "; cin >> grades04;
	cout << "Grade 5:  "; cin >> grades05;
	
	return make_tuple(grades01, grades02, grades03, grades04, grades05);
}

float PerformCalculations() {
	/**
	Calculations:  Assign letter and grade value for user input
		use those to calculate the grade point average

	@param Self-contained. Only called on.
	@return The ending Grade Point Average for the user input.
*/
	float grades[5];
	tie(grades[0], grades[1], grades[2], grades[3], grades[4]) = UserInput();
	char letterValue[5];
	float qualityPoints[5];
	float totalPoints = 0;

	for (auto num = 0; num <= 4; num++) {
		if (grades[num] >= 90 && grades[num] <= 100) {
			letterValue[num] = 'A';
			qualityPoints[num] = 4;
		}
		if (grades[num] >= 80 && grades[num] <= 89) {
			letterValue[num] = 'B';
			qualityPoints[num] = 3;
		}
		if (grades[num] >= 70 && grades[num] <= 79) {
			letterValue[num] = 'C';
			qualityPoints[num] = 2;
		}
		if (grades[num] >= 60 && grades[num] <= 69) {
			letterValue[num] = 'D';
			qualityPoints[num] = 1;
		}
		if (grades[num] <= 59) {
			letterValue[num] = 'F';
			qualityPoints[num] = 0;
		}
	}

	cout << "\nLetter values for the input grades:  " << endl;
	for (auto num = 0; num <= 4; num++) {
		totalPoints += qualityPoints[num];
		cout << "Grade " << int(num + 1) << ":  " << letterValue[num] << endl;
	}

	const auto gpa = totalPoints / 5;

	return gpa;
}

int main() {
	const auto gpa = PerformCalculations();
	cout << setprecision(2) << "\n Your grade point average is:  " << gpa << endl;
	if (gpa > 3.5) {
		cout << "Congratulations! You are an honor student!" << endl;
	}
}

/**
	I was going to use the new 'switch statement' that we learned in the chapter,
	but the 'for loop' was already setup to assign the grades... adding switch felt a little
	unnecessary. I was also playing around with arrays... and pretty sure that I misused them
	a bit.
*/
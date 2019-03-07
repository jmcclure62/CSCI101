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

tuple <float, float, float, float, float> userInput() {
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

float performCalculations() {
	/**
	Calculations:  Assign letter and grade value for user input
		use those to calculate the grade point average

	@param Self-contained. Only called on.
	@return The ending Grade Point Average for the user input.
*/
	float grades[5];
	tie(grades[0], grades[1], grades[2], grades[3], grades[4]) = userInput();
	char letter_value[5];
	float quality_points[5];
	float total_points = 0;
	float gpa;

	for (int num = 0; num <= 4; num++) {
		if (grades[num] >= 90 && grades[num] <= 100) {
			letter_value[num] = 'A';
			quality_points[num] = 4;
		}
		if (grades[num] >= 80 && grades[num] <= 89) {
			letter_value[num] = 'B';
			quality_points[num] = 3;
		}
		if (grades[num] >= 70 && grades[num] <= 79) {
			letter_value[num] = 'C';
			quality_points[num] = 2;
		}
		if (grades[num] >= 60 && grades[num] <= 69) {
			letter_value[num] = 'D';
			quality_points[num] = 1;
		}
		if (grades[num] <= 59) {
			letter_value[num] = 'F';
			quality_points[num] = 0;
		}
	}

	cout << "\nLetter values for the input grades:  " << endl;
	for (int num = 0; num <= 4; num++) {
		total_points += quality_points[num];
		cout << "Grade " << int(num + 1) << ":  " << letter_value[num] << endl;
	}
	
	gpa = total_points / 5;

	return gpa;
}

int main() {
	float gpa = performCalculations();
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
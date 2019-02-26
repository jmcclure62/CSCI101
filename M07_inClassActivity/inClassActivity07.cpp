/**
	CSCI101, inClassActivity07.cpp
	Purpose:  Calculate and display values based on student grades.

	@author J. McClure
	@version 1.0 02/25/2019

	Stlye Note:  '_underbar used for local variables' && 'camelCase used for function names'
*/

#include <iostream>
using namespace std;

char userInput() {
/**
	Asks the user for a single character input

	@param None. Simple call, no function input necessary.
	@return The value that the user input
*/
	char user_input;
	cout << "Please select, and input, a single character from the 26 found within the English alphabet:" << endl;
	cin >> user_input;

	return user_input;
}

string inputTesting(char toVerify) {
/**
	Tests if the input character is, is not, or is sometimes a vowel

	@param character received from the userInput function
	@return string value declaring if it is, is not, or is sometimes a vowel
*/
	string testing_done;
	switch (toVerify) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		testing_done = "is a vowel!";
		break;
	case 'Y':
		testing_done = "is only sometimes a vowel.";
		break;
	default:
		testing_done = "is not a vowel.";
	return testing_done;
	}
}

int main() {
	char user_input = toupper(userInput()); // 'toupper' used to reduce value checking to uppercase only
	cout << "\nYou input the character [" << user_input << "], which " << inputTesting(user_input) << endl;
}
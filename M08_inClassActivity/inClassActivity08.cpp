/**
	CSCI101, inClassActivity08.cpp
	Purpose:  Calculate and display costs of writing checks using CONST.

	@author Jonas McClure
	@version 1.0 03/05/2019
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class user_input {
public:
	// include validation for number of checks less than 1
	int inputFunction() {
		int choice = 0;
		do {
			cout << "Please enter the number of checks written in a select month:  " << endl;
			cin >> choice;
		} while(int(choice) <= 1);
		return choice;
	} 
};

class BankCalculations {
user_input get_checks__;


public:
	
	double check_fees() {
		auto num_of_checks = int(get_checks__.inputFunction());
		double total_cost = 0;
		const double flat = 10.0; //flat_ fee for writing a check in the month
		const double one = 0.10; // 0.1 charge per check until 19
		const double twenty = 0.08; // 0.08 charge per check until 39
		const double forty = 0.06; // 0.06 charge per check until 59
		const double sixty = 0.04; // 0.04 charge per check above or at 60
		if (num_of_checks <= 19) {
			total_cost = flat + num_of_checks * one;
		}
		else if (num_of_checks <= 39) {
			num_of_checks = num_of_checks - 19;
			total_cost = flat + 19 * one + twenty * num_of_checks;
		}
		else if (num_of_checks <= 59) {
			num_of_checks = num_of_checks - 39;
			total_cost = flat + 19 * one + twenty * 20 + forty * num_of_checks;
		}
		else if (num_of_checks >= 60) {
			num_of_checks = num_of_checks - 59 ;
			total_cost = flat + 19 * one + twenty * 20 + forty * 20 + sixty*num_of_checks;
		}
		return total_cost;
	}

};

class display_to_user {
	BankCalculations bank_fees__;
public:
	// display in currency format (with $ and two decimal places only)
	void display_fees() {
		const double check_cost = bank_fees__.check_fees();
		cout << fixed << setprecision(2);
		cout << "The total cost for writing checks in the select month is:  $" << check_cost << endl;
	}

};

int main() {
	display_to_user output_console;
	output_console.display_fees();

}

/**
	CSCI101, inClassActivity08.cpp
	Purpose:  Calculate and display costs of writing checks using CONST.

	@author Jonas McClure
	@version 1.0 03/05/2019
*/

#include <iostream>
#include "iomanip"

using namespace std;

class UserInput
{
public:
	// include validation for number of checks less than 1
	static int InputFunction()
	{
		auto choice = 0;
		do
		{
			cout << "Please enter the number of checks written in a select month:  " << endl;
			cin >> choice;
		}
		while (choice <= 1);
		return choice;
	}
};

class BankCalculations
{
public:

	static double CheckFees()
	{
		auto numOfChecks = int(UserInput::InputFunction());
		double totalCost = 0;
		const auto flat = 10.0; //flat_ fee for writing a check in the month
		const auto one = 0.10; // 0.1 charge per check until 19
		const auto twenty = 0.08; // 0.08 charge per check until 39
		const auto forty = 0.06; // 0.06 charge per check until 59
		const auto sixty = 0.04; // 0.04 charge per check above or at 60
		if (numOfChecks <= 19)
		{
			totalCost = flat + numOfChecks * one;
		}
		else if (numOfChecks <= 39)
		{
			numOfChecks = numOfChecks - 19;
			totalCost = flat + 19 * one + twenty * numOfChecks;
		}
		else if (numOfChecks <= 59)
		{
			numOfChecks = numOfChecks - 39;
			totalCost = flat + 19 * one + twenty * 20 + forty * numOfChecks;
		}
		else if (numOfChecks >= 60)
		{
			numOfChecks = numOfChecks - 59;
			totalCost = flat + 19 * one + twenty * 20 + forty * 20 + sixty * numOfChecks;
		}
		return totalCost;
	}
};

class DisplayToUser
{
public:
	// display in currency format (with $ and two decimal places only)
	static void DisplayFees()
	{
		const auto checkCost = BankCalculations::CheckFees();
		cout << fixed << setprecision(2);
		cout << "The total cost for writing checks in the select month is:  $" << checkCost << endl;
	}
};


int main()
{
	DisplayToUser::DisplayFees();
	return 0;
}

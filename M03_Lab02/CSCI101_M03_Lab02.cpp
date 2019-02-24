/*
Program Name:  CSCI101_M03_Lab02.cpp
Author:  Jonas McClure
Date Last Updated:  01/28/2019
Purpose:  Produce User Data Output
*/

#include <iostream>
using namespace std;

int main()
{

	// Insert user input for the initial cost of their purchase.

	float initialValue;
	cout << "Thank you for using the Super Awesome Total Value App!" << endl << endl;
	cout << "Please type the initial value of your purchase and press the 'return' key:  ";
	cin >> initialValue;

	// Assign variables taxValue, tipValue, and totalValue based on the user input.

	float taxValue = initialValue * float(0.0675);
	float tipValue = initialValue * float(0.2);
	float totalValue = initialValue + taxValue + tipValue;

	// Display the ending values to the user
	// "%.2f" = floating precision to get the values in currency format. (Reference: http://www.cplusplus.com/reference/cstdio/printf/)
	cout << endl;
	cout << endl << "The initial value of your purchase is:       $"; printf("%.2f", initialValue);
	cout << endl << "The total tax on your purchase (@6.75%) is:  $"; printf("%.2f", taxValue);
	cout << endl << "The tip on the purhcase (@20%) is:           $"; printf("%.2f", tipValue);
	cout << endl << "The total amount due on your purchase is:    $"; printf("%.2f", totalValue);
	cout << endl << endl << "Have a wonderful day!" << endl;

	return 0;
}

// ******************************************************************************************************************************************************
// Write a program that informs a user of their meal charge. Create a variable and assign it a value for the meal charge(e.g.$32.95).
// The program should then compute the tax and tip on the restaurant bill.The tax should be 6.75 percent of the meal cost.
// The tip should be 20 percent of the total after adding the tax.This program does not need to take user input, and the output should not be formatted.
// Display the meal cost, tax amount, tip amount, and total bill on the screen
// ******************************************************************************************************************************************************
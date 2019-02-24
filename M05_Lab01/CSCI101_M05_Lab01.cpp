/*
Program Name:  CSCI101_M05_Lab01.cpp
Author:  Jonas McClure
Date Last Updated:  02/18/2019
Purpose:  Utilize File Input When Calculating Numbers.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

// Open the output file and set values to two decimal places.
	outFile.open("userValues.txt");
	outFile << fixed << showpoint << setprecision(2);


	// Ask for the user input
	double initialValue;
	cout << "Please enter the total value of your bill:  " << endl;
	cin >> initialValue;

	// Setup the math to find the discount and total.
	double discountValue = initialValue * .2;
	double totalValue = initialValue - discountValue;

	// Output the appropriate sections on newlines.
	outFile << "Initial Purchase:  $" << initialValue << endl;
	outFile << "Discount (20%):  $" << discountValue << endl;
	outFile << "Final Amount:     $" << totalValue << endl;
	cout << initialValue << endl;

	outFile.close();
	return 0;
}

// ********************************************************************************
//  Write a program that prompts the user to enter their total bill. Being a member of
//  the discount club takes 20% off the total. Write the amount the user entered as
//  well as the amount of the discount, and the new discounted total formatted to two
//  decimal places to a file.
//
//  For this assignment, you are required to put header documentation and inline comments.
// ********************************************************************************

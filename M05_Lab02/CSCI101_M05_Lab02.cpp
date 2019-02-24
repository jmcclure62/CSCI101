/*
Program Name:  CSCI101_M05_Lab02.cpp
Author:  Jonas McClure
Date Last Updated:  02/18/2019
Purpose:  Use File Input & Output when Calculating Bills
*/

#include "pch.h"
#include "output.h"

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("meals.txt");
	outFile.open("costs.txt");

	outFile << fixed << showpoint << setprecision(2);
	cout << fixed << showpoint << setprecision(2);

	// Create the necessary variables and input the 6 values from the 'meals.txt' file.
	float meal1, meal2, meal3, meal4, meal5, meal6;
	float tax = 0.0675;
	float tip = 0.2;
	inFile >> meal1 >> meal2 >> meal3 >> meal4 >> meal5 >> meal6;

	// Extract the values, along with some simple math, and place into the file 'costs.txt' & display.
	cout << "Meal #1"; DisplayOutput(meal1, tax, tip); cout << "Meal #2"; DisplayOutput(meal2, tax, tip);
	cout << "Meal #3"; DisplayOutput(meal3, tax, tip); cout << "Meal #4"; DisplayOutput(meal4, tax, tip);
	cout << "Meal #5"; DisplayOutput(meal5, tax, tip); cout << "Meal #6"; DisplayOutput(meal6, tax, tip);

	outFile << "Meal #1";  FileOutput(outFile, meal1, tax, tip); outFile << "Meal #2";  FileOutput(outFile, meal2, tax, tip);
	outFile << "Meal #3"; FileOutput(outFile, meal3, tax, tip); outFile << "Meal #4";  FileOutput(outFile, meal4, tax, tip);
	outFile << "Meal #5"; FileOutput(outFile, meal5, tax, tip); outFile << "Meal #6";  FileOutput(outFile, meal6, tax, tip);

	inFile.close();
	outFile.close();
}

//********************************************************************************
//  For M03 Lab Assignment 2, you were asked to write a program to calculate meal
//  charges with tax and tip included. This assignment will expand on that program.
//
//  Write a program that reads meal prices from the meals.txt file. You will read 6
//  values from the file. For each value read from the file, you will calculate tax and tip
//  and the total bill like in M03 Lab 2. The tax should be 6.75 percent of the meal
//  cost. The tip should be 20 percent of the total after adding the tax. For each value
//  you will also need to output (both to the screen and to a file) the meal cost, tax, tip
//  and the total formatted to 2 decimal places.
//
//  When writing the file input code make sure to use the correct file name "meal.txt",
//  and during file output make sure to use a name other than the input file name.
//********************************************************************************
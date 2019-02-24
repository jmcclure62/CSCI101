/*
Program Name:  inClassActivity6.cpp
Author:  Jonas McClure
Date Last Updated:  02/19/2019
Purpose:  ...
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Function:  Singularly used to find the discriminant. Passed on to other functions.
double FindDiscriminant(double varA, double varB, double varC)
{
	double square = pow(varB, 2);
	double discriminant = square - 4 * varA * varC;
	
	return discriminant;
}

// Function:  Find the number of roots possible.
void NumberOfRoots(double discrim)
{
	if (discrim == 0) 
	{
		cout << "There is a single (repeated) root for the numbers input." << endl;
	}
	else if (discrim > 0) 
	{
		cout << "There are two real roots for the numbers input. " << endl;
	}
	else if (discrim < 0)
	{
		cout << "There are two complex roots for the numbers input." << endl;
	}
}

// Function:  Find REAL roots if Disc >= 0 & display results.
void SolveRoots(double varA, double varB, double varC, double discrim)
{
	double firstRoot;
	double secondRoot;

	if (discrim >= 0)
	{
		firstRoot = (-varB + sqrt(discrim)) / (2 * varA);
		secondRoot = (-varB - sqrt(discrim)) / (2 * varA);

		cout << "These roots of are:  " << firstRoot << " and " << secondRoot << "." << endl;
	}
}

int main()
{
	double varA, varB, varC;
	cout << "Please enter the three variables (A, B, C) to be input into the Quadratic Formula:  " << endl;
	cin >> varA >> varB >> varC;

	cout << "The discriminant of the Quadratic Equation is:  " << FindDiscriminant(varA, varB, varC) << "\n" << endl;
	
	NumberOfRoots(FindDiscriminant(varA, varB, varC)); cout << "\n";
	SolveRoots(varA, varB, varC, FindDiscriminant(varA, varB, varC));

}

//  ********************************************************************************************
//  The roots of the quadratic equation ax^2+bx+c=0, a!=0 are given by the quadratic formula.
//  In this formula, the term b^2 -4ac is called the discriminant. If b^2-4ac=0, then the equation
//  has a single (repeated) root. If b^2-4ac>0, the equation has two real roots. If b^2-4ac<0, the
//  equation has two complex roots.
//  
//  Write a program that prompts the user to input the value of a (the coefficient of x^2), b (the
//  coefficient of x), and c (the constant term) and outputs the type of roots of the equation. 
//  Furthermore, if b^2-4ac is greater than or equal to zero, the program should output the roots
//  of the quadratic equation.
//  
//  Hint:  Use the function [pow] from the header file [cmath] to calculate the square root.
//  Chapter 3 explains how the function [pow] is used.
//  ********************************************************************************************

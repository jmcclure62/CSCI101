/*
Program Name:			in-classActivity3.cpp
Author:					Jonas McClure
Date Last Updated:		January 28, 2019
Purpose:				Test the accuracy of the cin assignment statements.
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	double z;
	char ch;

	cout << "(Round 1) Please type the following:  57 A 26.9" << endl
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cin >> a >> ch >> z;
	cout << endl << "The input for 'a', 'ch', and 'z' are displayed below:  " << endl
		<< "a = " << a << endl
		<< "ch = " << ch << endl
		<< "z = " << z << endl
		<< endl << endl;

	cout << "(Round 2) Please type the following, with 26.9 on its own line:  57 A \n26.9" << endl
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cin >> a >> ch >> z;
	cout << endl << "The input for 'a', 'ch', and 'z' are displayed below:  " << endl
		<< "a = " << a << endl
		<< "ch = " << ch << endl
		<< "z = " << z << endl
		<< endl << endl;

	cout << "(Round 3) Please type the following on separate lines:  \n57 \nA \n26.9" << endl
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cin >> a >> ch >> z;
	cout << endl << "The input for 'a', 'ch', and 'z' are displayed below:  " << endl
		<< "a = " << a << endl
		<< "ch = " << ch << endl
		<< "z = " << z << endl
		<< endl << endl;

	cout << "(Round 4) Please type the following:  57A26.9" << endl
		<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cin >> a >> ch >> z;
	cout << endl << "The input for 'a', 'ch', and 'z' are displayed below:  " << endl
		<< "a = " << a << endl
		<< "ch = " << ch << endl
		<< "z = " << z << endl
		<< endl << endl;


	return 0;
}

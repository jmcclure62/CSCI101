//***********************************************************
//
// Author: Jonas McClure
//
// February 14, 2019
//
// This Lecture Activity (inClassActivity5.cpp)
// utilizes setw, fixed, showpoint and setprecision
//
//***********************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string mortItem      = "Mortgage payment:";
	string carItem       = "Car payment:";
	string electricItem  = "Electric payment:";
	string waterItem     = "Water payment:";
	string cableItem     = "Cable payment:";
	string phoneItem     = "Phone payment:";
	
	double mortgagePmt;
	double carPmt;
	double electricPmt;
	double waterPmt;
	double cablePmt;
	double phonePmt;
	
	double totalOwed = 0;
	
	// Begin asking for user input for variables defined in lines 27 to 32.
	cout << "Enter the mortgage payment:  " << endl;
	cin >> mortgagePmt;

	cout << "Enter the car payment:  " << endl;
	cin >> carPmt;

	cout << "Enter the electric payment:  " << endl;
	cin >> electricPmt;

	cout << "Enter the water payment:  " << endl;
	cin >> waterPmt;

	cout << "Enter the cable payment:  " << endl;
	cin >> cablePmt;

	cout << "Enter the phone payment:  " << endl;
	cin >> phonePmt;

	// Display the input with the specified format
	cout << string(50, '=') << fixed << setprecision(2) << endl;

	cout << setw(40) << left << mortItem << right << "$" << setw(9) << right << mortgagePmt << endl;
	cout << setw(40) << left << carItem << setw(10) << right << carPmt << endl;
	cout << setw(40) << left << electricItem << setw(10) << right << electricPmt << endl;
	cout << setw(40) << left << waterItem << setw(10) << right << waterPmt << endl;
	cout << setw(40) << left << cableItem <<setw(10) <<  right << cablePmt << endl;
	cout << setw(40) << left << phoneItem << setw(10) << right << phonePmt << endl;

	cout << string(50, '_') << endl;

	string totalItem = "TOTAL:";
	totalOwed = mortgagePmt + carPmt + electricPmt + waterPmt + cablePmt + phonePmt;
	cout << setw(40) << left << totalItem << right << "$" << setw(9) << right << totalOwed << endl;

	
	return 0;
	
}

// cout << setw(6) << left << "input" << endl;
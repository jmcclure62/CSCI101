#include "output.h"

using namespace std;

void DisplayOutput(float num, float tax, float tip)
{
	cout << endl << "Initial Value:   $" << num << " | "
		<< "Tax:   $" << num * tax << " | " << "Tip:   $" << num * tip << " | "
		<< "Total:   $" << num + num * tax + num * tip << endl << endl;
}

void FileOutput(ofstream& outFile, float num, float tax, float tip)
{
	outFile << endl << "Initial Value:   $" << num << " | "
		<< "Tax:   $" << num * tax << " | " << "Tip:   $" << num * tip << " | "
		<< "Total:   $" << num + num * tax + num * tip << endl << endl;
}
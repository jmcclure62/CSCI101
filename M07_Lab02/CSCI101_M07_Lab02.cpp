/**
	CSCI101, CSCI101_M07_Lab02.cpp
	Purpose:  Calculate and display values based Body Mass Index w/File Input.

	@author Jonas McClure
	@version 1.0 02/27/2019
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int line_number() {
/**
	Find the number of lines within the file

	@param No
	@return file line count
*/
	ifstream in_file("BMI.dat");
	int num_of_lines = 0;
	for (string line; getline(in_file, line);) {
		++num_of_lines;
	}
	return num_of_lines;
}

void weight_to_pounds(vector<float> &weight) {
	int i = 0;
	for (auto v : weight) {
		weight.at(i) = weight.at(i) * float(2.2);
		i++;
	}
}

void cm_to_inches(vector<float>& height) {
	int i = 0;
	for (auto v : height) {
		height.at(i) = height.at(i) * float(0.39);
		i++;
	}
}

string body_index(float weight, float height) {
/**
	Calculates the body mass index based on American
		measuring systems.

	@param input the converted weight and height
	@return display output containing BMI
*/
	string results;
	float index = (weight * 703) / (height * height);
	ostringstream oss;
	oss << fixed << setprecision(2);
	if (index >= 18.5 && index <= 25) {
		oss << " has an optimal body mass index of " << index << "!";
	}
	else if (index > 25) {
		oss << " has an overweight body mass index of " << index << "!";
	}
	else {
		oss << " has an underweight body mass index of " << index << "!";
	}
	
	return oss.str();
}

void bmi_output(vector<string> &name, vector<float>& weight, vector<float>& height) {
	int i = 0;
	while (i <= line_number() - 1) {
		cout << name.at(i) << body_index(weight.at(i), height.at(i)) << endl;
		i++;
	}
}

int main() {
	ifstream in_file("BMI.dat");

	int size = line_number() + 1;
	vector<string> name(size);
	vector<float> weight(size);
	vector<float>height(size);

	int i = 0;
	while (in_file.good()) {
		in_file >> name.at(i) >> weight.at(i) >> height.at(i);
		i++;
	}

	weight_to_pounds(weight);
	cm_to_inches(height);
	bmi_output(name, weight, height);
}


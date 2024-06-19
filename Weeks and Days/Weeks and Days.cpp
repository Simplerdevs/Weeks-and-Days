								/* Program to Read number of hours then calculate the number of weeks and days included in that number  */
#include <iostream>
#include <cmath>
using namespace std;


int main()

{
	float Number_Of_Hours;
	cout << "Please enter the number of hours " << endl;
	cin >> Number_Of_Hours;


	float days = Number_Of_Hours / 24;
	float weeks = days / 7;
	
	cout << "Days = " << days << endl;
	cout << "weeks = " << weeks << endl;

	
	return 0;

	// Created by @ilyes_Trabelsi
}


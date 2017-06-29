#include <iostream>
#include <cctype>
#include "Chapter4Problems.h"

int main() {
	chapter4Problems *p1 = new chapter4Problems;
	p1->areaOfRectangles();
	system("pause");
	return 0;
}

void chapter4Problems::minimumOrMaximum()
{
	//This program will determine which number is smaller and larger from two inputs

	//Get the first number
	double num1, num2;
	std::cout << "Enter a number: ";
	std::cin >> num1;

	//Get the second number
	std::cout << "Enter another number: ";
	std::cin >> num2;

	//Compare the two values to see which one is smaller and larger
	if (num1 > num2)
		std::cout << num1 << " is larger than " << num2 << "." << std::endl;
	else if (num2 > num1)
		std::cout << num2 << " is larger than " << num1 << "." << std::endl;
	else
		std::cout << "Both numbers are the same." << std::endl;
}

void chapter4Problems::magicDates()
{
	//This program will determine if a date given is a magic date: the month * the day = the year

	int month, day, year;

	//Ask for month, day, and year
	std::cout << "Enter the month in numeric form (xx): ";
	std::cin >> month;

	std::cout << "Enter the day in numeric form (xx): ";
	std::cin >> day;

	std::cout << "Enter the year in numeric form of the last two of the four digits (xx): ";
	std::cin >> year;

	if (month * day == year)
		std::cout << "The date you have entered is a magic date!" << std::endl;
	else
		std::cout << "The date you have entered is not a magic date." << std::endl;
}

void chapter4Problems::areaOfRectangles()
{
	//This program will compare which area of two rectangles is larger depending on the user input of length and width

	double length1, width1, length2, width2, area1, area2;

	//Gather length, width, and calcuate area of the first rectangle
	std::cout << "Enter the length of the first rectangle: ";
	std::cin >> length1;

	std::cout << "Enter the width of the first rectangle: ";
	std::cin >> width1;

	area1 = length1 * width1;

	//Gather length, width, and calcuate area of the second rectangle
	std::cout << "Enter the length of the second rectangle: ";
	std::cin >> length2;

	std::cout << "Enter the width of the first rectangle: ";
	std::cin >> width2;

	area2 = length2 * width2;

	//Compare which rectangle's area is smaller/larger
	if (area1 > area2)
		std::cout << "Rectangle 1 is larger than Rectangle 2." << std::endl;
	else if (area2 > area1)
		std::cout << "Rectangle 2 is larger than Rectangle 1." << std::endl;
	else
		std::cout << "Both rectangles are the same." << std::endl;
}
chapter4Problems::chapter4Problems()
{
}
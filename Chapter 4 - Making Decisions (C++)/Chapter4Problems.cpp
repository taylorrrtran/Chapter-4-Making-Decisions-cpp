#include <iostream>
#include <ctime>
#include <iomanip>
#include <cctype>
#include <string>
#include <cmath>
#include "Chapter4Problems.h"

int main() {
	chapter4Problems *p1 = new chapter4Problems;
	p1->mobileService();
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

void chapter4Problems::romanNumeralConverter()
{
	//This program will ask for user input from 1-10 and convert into Roman numeral version

	int romanNumeral;

	//Gather input
	std::cout << "Please enter a number from 1 - 10 to convert to its Roman numeral form: ";
	std::cin >> romanNumeral;

	//Input validation: Numbers can only be from 1 to 10
	while (romanNumeral < 1 || romanNumeral > 10)
	{
		std::cout << "Input cannot be less than 1 or greater than 10. Try again: ";
		std::cin >> romanNumeral;
	}

	//Convert the input to its Roman numeral version
	switch (romanNumeral) 
	{
		case 1: std::cout << "Roman Numeral conversion: I" << std::endl;
				break;
		case 2: std::cout << "Roman Numeral conversion: II" << std::endl;;
			break;
		case 3: std::cout << "Roman Numeral conversion: III" << std::endl;;
			break;
		case 4: std::cout << "Roman Numeral conversion: IV" << std::endl;;
			break;
		case 5: std::cout << "Roman Numeral conversion: V" << std::endl;;
			break;
		case 6: std::cout << "Roman Numeral conversion: VI" << std::endl;;
			break;
		case 7: std::cout << "Roman Numeral conversion: VII" << std::endl;;
			break;
		case 8: std::cout << "Roman Numeral conversion: VIII" << std::endl;;
			break;
		case 9: std::cout << "Roman Numeral conversion: IX" << std::endl;;
			break;
		case 10: std::cout << "Roman Numeral conversion: X" << std::endl;;
			break;
	}
}

void chapter4Problems::bodyMassIndex()
{
	//This program will calculate and dislay a person's body mass index (BMI)

	double height, weight, BMI;

	//Gather input
	std::cout << "Enter your height in inches: ";
	std::cin >> height;

	std::cout << "Enter your weight in pounds: ";
	std::cin >> weight;

	//Calculate BMI
	BMI = (weight * 703) / pow(height, 2);

	//Determine if optimal weight, overweight, or underweight for height
	if (BMI >= 18.5 && BMI <= 25)
		std::cout << "You have an optimal weight." << std::endl;
	else if (BMI < 18.5)
		std::cout << "You are underweight." << std::endl;
	else
		std::cout << "You are overweight." << std::endl;
}

void chapter4Problems::massAndWeight()
{
	//This program will calculate an object's weight and display if it's heavy or light

	double weight, mass;

	//Gather input
	std::cout << "Enter the object's mass in kilograms: ";
	std::cin >> mass;

	//Calculate weight
	weight = mass * 9.8;

	//Display if it is heavy or light based on weighing conditions (in newtons)
	std::cout << "Weight of object (in newtons): " << weight << std::endl;
	if (weight > 1000)
		std::cout << "The object is too heavy. " << std::endl;
	else if (weight < 10)
		std::cout << "The object is too light. " << std::endl;
}

void chapter4Problems::timeCalculator()
{
	//This program will convert seconds into the appropriate time equivalent

	double seconds;

	//Gather input
	std::cout << "Enter a time in seconds: ";
	std::cin >> seconds;

	//Convert seconds into either minutes, hours, or days
	if (seconds < 3600)
	{
		double minutes = seconds / 60;
		std::cout << "The equivalent is: " << minutes << " minute(s). " << std::endl;
	}
	else if (seconds >= 3600 && seconds < 86400 )
	{
		double hours = seconds / 3600;
		std::cout << "The equivalent is: " << hours << " hour(s). " << std::endl;
	}
	else if (seconds >= 86400)
	{
		double days = seconds / 86400;
		std::cout << "The equivalent is: " << days << " day(s). " << std::endl;
	}
}

void chapter4Problems::colorMixer()
{
	/* This program will display the secondary color after mixing two primary colors
	   between red, blue, and yellow */

	std::string color1, color2;

	//Gather input for 1st color
	std::cout << "Enter a color to mix out of the three choices of red, blue, or yellow (in lowercase): ";
	std::cin >> color1;

	//Input validation: Colors entered can only be either red, blue, or yellow
	while (color1 != "red" && color1 != "blue" && color1 != "yellow")
	{
		std::cout << "You must choose a color from either red, blue, or yellow. Type in loweracse: ";
		std::cin >> color1;
	}

	//Gather input for 2nd color
	std::cout << "Enter another color to mix out of the three choices of red, blue, or yellow: ";
	std::cin >> color2;

	//Input validation: Colors entered can only be either red, blue, or yellow
	while (color2 != "red" && color2 != "blue" && color2 != "yellow")
	{
		std::cout << "You must choose a color from either red, blue, or yellow. Type in loweracse: ";
		std::cin >> color2;
	}

	//Display the mixed seceondary color or present the original color
	if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
		std::cout << "The secondary color is purple." << std::endl;

	else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
		std::cout << "The secondary color is orange." << std::endl;

	else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
		std::cout << "The secondary color is green." << std::endl;

	else if ((color1 == "blue" && color2 == "blue"))
		std::cout << "The color is still blue. " << std::endl;

	else if ((color1 == "red" && color2 == "red"))
		std::cout << "The color is still red. " << std::endl;

	else 
		std::cout << "The color is still yellow. " << std::endl;
}

void chapter4Problems::changeForADollar() 
{
	/* This program will ask the user to enter the number of pennies, nickels, dimes, and quarters.
	   If the total value entered is equal to a dollar, the user wins. */

	double pennies, nickels, dimes, quarters;

	//Gather user input
	std::cout << "Welcome to the change for a dollar game! If you enter the correct amount \n";
	std::cout << "of value in coins that equals to a dollar, you win!" << std::endl;
	std::cout << "Enter the amount of pennies: ";
	std::cin >> pennies;

	std::cout << "Enter the amount of nickels: ";
	std::cin >> nickels;

	std::cout << "Enter the amount of dimes: ";
	std::cin >> dimes;

	std::cout << "Enter the amount of quarters: ";
	std::cin >> quarters;

	//Calculate total amount based on the different amount of coins entered
	pennies *= 0.01;
	nickels *= 0.05;
	dimes *= 0.10;
	quarters *= 0.25;
	
	double total = pennies + nickels + dimes + quarters;

	//Determine if total is equivalent, less, or more
	if (total == 1)
		std::cout << "Congratulations! The amount of coins you entered is valued at one dollar!" << std::endl;
	else if (total < 1)
		std::cout << "The amount of coins you have entered was valued less than a dollar. " << std::endl;
	else
		std::cout << "The amount of coins you have entered was valued more than a dollar. " << std::endl;
}

void chapter4Problems::daysInAMonth()
{
	/* This program will ask the user to enter the month (numerical value) and year.
	    Then this program will display the amount of days in that month including leap years. */

	int month, year, days;

	//Gather input
	std::cout << "Enter a month in numerical value (1 - 12): ";
	std::cin >> month;

	//Input validation: Month can only be inputted from 1 - 12
	while (month < 1 || month > 12)
	{
		std::cout << "Input cannot be less than 1 or greater than 12. Try again: ";
		std::cin >> month;
	}

	std::cout << "Enter a year: ";
	std::cin >> year;

	//Calculate the number of days in the user input's given month
	switch (month)
	{
		case 1: std::cout << "Days in January: 31" << std::endl;
			break;

		//Exception for February. Must consider leap years
		case 2: if (year % 100)
				{
					if ((year % 400) == 0)
						std::cout << "Days in February: 29" << std::endl;
					else
						std::cout << "Days in February: 28" << std::endl;
				}
				else if (!(year % 100))
				{
					if ((year % 4) == 0)
						std::cout << "Days in February: 29" << std::endl;
					else
						std::cout << "Days in February: 28" << std::endl;
				}
		
			break;

		case 3: std::cout << "Days in March: 31" << std::endl;
			break;
		case 4: std::cout << "Days in April: 30" << std::endl;
			break;
		case 5: std::cout << "Days in May: 31" << std::endl;
			break;
		case 6: std::cout << "Days in June: 30" << std::endl;
			break;
		case 7: std::cout << "Days in July: 31" << std::endl;
			break;
		case 8: std::cout << "Days in August: 31" << std::endl;
			break;
		case 9: std::cout << "Days in September: 30" << std::endl;
			break;
		case 10: std::cout << "Days in October: 31" << std::endl;
			break;
		case 11: std::cout << "Days in November: 30" << std::endl;
			break;
		case 12: std::cout << "Days in December: 31" << std::endl;
			break;
	}
}

void chapter4Problems::mathTutor()
{
	//This program will generated random numbers that will be added and need to be solved by user input

	//Get the system time
	unsigned seed = time(0);

	//Seed the random number generator
	srand(seed);

	//Range value from 1 - 999
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 999;
	int number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	int number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	//Display problem and let user type in answer. 
	std::cout << std::setw(5) << number1 << std::endl;
	std::cout << "+ " << std::setw(3) << number2 << std::endl;
	std::cout << "------";

	int answer;
	std::cout << "Type in the correct answer: ";
	std::cin >> answer;

	//If correct, congratulate.Else, show correct answer.
	int total = number1 + number2;
	if (answer == total)
		std::cout << "Congratulations! That is the correct answer! " << std::endl;
	else
		std::cout << "Correct answer is: " << std::setw(5) << total << std::endl;
}

void chapter4Problems::softwareSales()
{
	//This program will compute the total cost of software packages sold

	double units, total;

	//Gather input
	std::cout << "Enter the amount of software packages sold: ";
	std::cin >> units;

	//Input validation: Units sold must be greater than 0


	//Give discount based on amount of units sold
	if (units >= 10 && units <= 19)
	{
		double discount = units * 99 * 0.20;
		total = (units * 99) - discount;
	}
	else if (units >= 20 && units <= 49)
	{
		double discount = units * 99 * 0.30;
		total = (units * 99) - discount;
	}
	else if (units >= 50 && units <= 99)
	{
		double discount = units * 99 * 0.40;
		total = (units * 99) - discount;
	}
	else 
	{
		double discount = units * 99 * 0.50;
		total = (units * 99) - discount;
	}

	//Display the total
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "The total spend on software packages: $" << total << std::endl;
}

void chapter4Problems::bookClubPoints()
{
	/* This program will ask the user to enter a number of books that he or she has
	   purchased this month and display the number of points based on the amount purchased */

	double points, books;

	//Gather input
	std::cout << "Enter the amount of books bought for this month: ";
	std::cin >> books;

	//Determine the amount of points awarded based on amount books bought
	if (books <= 0)
		std::cout << "Amount of points awarded: 0 points" << std::endl;
	else if (books == 1)
		std::cout << "Amount of points awarded: 5 points" << std::endl;
	else if (books == 2)
		std::cout << "Amount of points awarded: 15 points" << std::endl;
	else if (books == 3)
		std::cout << "Amount of points awarded: 30 points" << std::endl;
	else
		std::cout << "Amount of points awarded: 60 points" << std::endl;
}

void chapter4Problems::bankCharges()
{
	//This program will compute and display a bank's service fees for the month

	int checks;
	double fees, balance;

	//Gather checks
	std::cout << "Enter the amount of checks written this month: ";
	std::cin >> checks;

	//Input validation: Number of checks written cannot be negative. 
	while (checks < 0)
	{
		std::cout << "The amount of checks written cannot be negative. Try again: ";
		std::cin >> checks;
	}

	//Gather balance 
	std::cout << "Enter the current balance for this month: $";
	std::cin >> balance;

	//If balance is negative, display that the account is overdrawn
	if (balance < 0)
		std::cout << "Warning! The account is overdrawn.";

	//A $15 fee is applied if balance of the account if the balance falls below $400
	if (balance < 400)
		fees = 15.00;
	else
		fees = 0;

	//Calculate fees
	if (checks < 20)
		fees += (checks * 0.10) + 10;
	else if (checks >= 20 && checks <= 39)
		fees += (checks * 0.08) + 10;
	else if (checks >= 40 && checks <= 59)
		fees += (checks * 0.06) + 10;
	else
		fees += (checks * 0.04) + 10;

	//Display bank fees
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Total bank fees for this mont: $" << fees;
}

void chapter4Problems::shippingCharges()
{
	//This program will display the charge to ship a package based on its weight and distance

	double weight, distance, fees;

	//Gather weight
	std::cout << "Enter the weight of the package in kilograms: ";
	std::cin >> weight;

	//Input validation: Weight cannot be less than 0 or more than the maximum of 20 kg
	while (weight < 0 && weight > 20)
	{
		std::cout << "Weight cannot be less than 0 or greater than 20 kg. Try again: ";
		std::cin >> weight;
	}

	//Gather distance
	std::cout << "Enter the distance the package needs to travel in miles: ";
	std::cin >> distance;

	//Input validation: Distance cannot be less than 10 miles or more than 3000 miles
	while (distance < 10 && distance > 3000)
	{
		std::cout << "Distance cannot be less than 10 or greater than 3000 miles. Try again: ";
		std::cin >> distance;
	}

	//Calculate shipping fees
	if (weight <= 2)
		fees = (distance / 500.00) * 1.10;
	else if (weight > 2 && weight < 6)
		fees = (distance / 500.00) * 2.20;
	else if (weight > 6 && weight < 10)
		fees = (distance / 500.00) * 3.70;
	else
		fees = (distance / 500.00) * 4.80;

	//Display shipping fees
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "The total shipping costs for this package is $" << fees << std::endl;
}

void chapter4Problems::runningTheRace()
{
	//This program will display what three runners placed in a race according to their time in order

	double racer1, racer2, racer3;

	//Gather Racer 1's time
	std::cout << "Enter the completion time for Racer 1 in seconds: ";
	std::cin >> racer1;

	//Input validation: Time can only be positive
	while (racer1 < 0)
	{
		std::cout << "The times can only be positive. Try again: ";
		std::cin >> racer1;
	}

	//Gather Racer 2's time
	std::cout << "Enter the completion time for Racer 1 in seconds: ";
	std::cin >> racer2;

	//Input validation: Time can only be positive
	while (racer2 < 0)
	{
		std::cout << "The times can only be positive. Try again: ";
		std::cin >> racer2;
	}

	//Gather Racer 3's time
	std::cout << "Enter the completion time for Racer 1 in seconds: ";
	std::cin >> racer3;

	//Input validation: Time can only be positive
	while (racer3 < 0)
	{
		std::cout << "The times can only be positive. Try again: ";
		std::cin >> racer3;
	}

	//Display which racer placed on what position
	if ((racer1 > racer2 && racer1 > racer3) && (racer2 > racer3))
	{
		std::cout << "First place : Racer 1" << std::endl;
		std::cout << "Second place: Racer 2" << std::endl;
		std::cout << "Third place : Racer 3" << std::endl;
	}
	else if ((racer1 > racer2 && racer1 > racer3) && (racer3 > racer2))
	{
		std::cout << "First place : Racer 1" << std::endl;
		std::cout << "Second place: Racer 3" << std::endl;
		std::cout << "Third place : Racer 2" << std::endl;
	}
	else if ((racer2 > racer1 && racer2 > racer3) && (racer1 > racer3))
	{
		std::cout << "First place : Racer 2" << std::endl;
		std::cout << "Second place: Racer 1" << std::endl;
		std::cout << "Third place : Racer 3" << std::endl;
	}
	else if ((racer2 > racer1 && racer2 > racer3) && (racer3 > racer1))
	{
		std::cout << "First place : Racer 2" << std::endl;
		std::cout << "Second place: Racer 3" << std::endl;
		std::cout << "Third place : Racer 1" << std::endl;
	}
	else if ((racer3 > racer1 && racer3 > racer2) && (racer1 > racer2))
	{
		std::cout << "First place : Racer 3" << std::endl;
		std::cout << "Second place: Racer 1" << std::endl;
		std::cout << "Third place : Racer 2" << std::endl;
	}
	else if ((racer3 > racer1 && racer3 > racer2) && (racer2 > racer1))
	{
		std::cout << "First place : Racer 3" << std::endl;
		std::cout << "Second place: Racer 2" << std::endl;
		std::cout << "Third place : Racer 1" << std::endl;
	}
	else if (racer1 == racer2 && racer2 == racer3)
		std::cout << "All three runners are tied for first place." << std::endl;
	else if (racer1 == racer2)
	{
		std::cout << "First place: Racer 1 and Racer 2" << std::endl;
		std::cout << "Second place: Racer 3" << std::endl;
	}
	else if (racer1 == racer3)
	{
		std::cout << "First place: Racer 1 and Racer 3" << std::endl;
		std::cout << "Second place: Racer 2" << std::endl;
	}
	else if (racer2 == racer3)
	{
		std::cout << "First place: Racer 2 and Racer 3" << std::endl;
		std::cout << "Second place: Racer 1" << std::endl;
	}
}

void chapter4Problems::personalBest()
{
	//This program will display in order the best vault attempts that were made based on height

	double height1, height2, height3;
	std::string date1, date2, date3;

	//Gather input of first pole vault attempt
	std::cout << "Enter the height of the first pole vault in meters: ";
	std::cin >> height1;

	//Input validation: Height can only be from 2 - 5
	while (height1 < 2 || height1 > 5)
	{
		std::cout << "Height can only be between 2 - 5 meters. Try again: ";
		std::cin >> height1;
	}

	//Gather date of first pole vault
	std::cout << "Enter the date of the first pole vault: ";
	std::getline(std::cin, date1);

	//Gather input of second pole vault attempt
	std::cout << "Enter the height of the second pole vault in meters: ";
	std::cin >> height2;

	//Input validation: Height can only be from 2 - 5
	while (height2 < 2 || height2 > 5)
	{
		std::cout << "Height can only be between 2 - 5 meters. Try again: ";
		std::cin >> height2;
	}

	//Gather date of second pole vault
	std::cout << "Enter the date of the second pole vault: ";
	std::getline(std::cin, date2);

	//Gather input of third pole vault attempt
	std::cout << "Enter the height of the third vault in meters: ";
	std::cin >> height3;

	//Input validation: Height can only be from 2 - 5
	while (height3 < 2 || height3 > 5)
	{
		std::cout << "Height can only be between 2 - 5 meters. Try again: ";
		std::cin >> height3;
	}

	//Gather date of third pole vault
	std::cout << "Enter the date of the third pole vault: ";
	std::getline(std::cin, date3);

	//Sort the best pole vault attempts in descending order
	if ((height1 > height2 && height1 > height3) && (height2 > height3))
	{
		std::cout << "First place: Racer 1, " << height1 << ", " << date1 << std::endl;
		std::cout << "Second place: Racer 2, " << height2 << ", " << date2 << std::endl;
		std::cout << "Third place: Racer 3, " << height3 << ", " << date3 << std::endl;
	}
	else if ((height1 > height2 && height1 > height3) && (height3 > height2))
	{
		std::cout << "First place: Racer 1, " << height1 << ", " << date1 << std::endl;
		std::cout << "Second place: Racer 3, " << height3 << ", " << date3 << std::endl;
		std::cout << "Third place: Racer 2, " << height2 << ", " << date2 << std::endl;
	}
	else if ((height2 > height1 && height2 > height3) && (height1 > height3))
	{
		std::cout << "First place: Racer 2, " << height2 << ", " << date2 << std::endl;
		std::cout << "Second place: Racer 1, " << height1 << ", " << date1 << std::endl;
		std::cout << "Third place: Racer 3, " << height3 << ", " << date3 << std::endl;
	}
	else if ((height2 > height1 && height2 > height3) && (height3 > height1))
	{
		std::cout << "First place: Racer 2, " << height2 << ", " << date2 << std::endl;
		std::cout << "Second place: Racer 3, " << height3 << ", " << date3 << std::endl;
		std::cout << "Third place: Racer 1, " << height1 << ", " << date1 << std::endl;
	}
	else if ((height3 > height1 && height3 > height2) && (height1 > height2))
	{
		std::cout << "First place: Racer 3, " << height3 << ", " << date3 << std::endl;
		std::cout << "Second place: Racer 1, " << height1 << ", " << date1 << std::endl;
		std::cout << "Third place: Racer 2, " << height2 << ", " << date2 << std::endl;
	}
	else if ((height3 > height1 && height3 > height2) && (height2 > height1))
	{
		std::cout << "First place: Racer 3, " << height3 << ", " << date3 << std::endl;
		std::cout << "Second place: Racer 2, " << height2 << ", " << date2 << std::endl;
		std::cout << "Third place: Racer 1, " << height1 << ", " << date1 << std::endl;
	}
	else if (height1 == height2)
	{
		std::cout << "First place: Racer 1" << height1 << ", " << date1 << std::endl;
		std::cout << "First place: Racer 2" << height2 << ", " << date2 << std::endl;
		std::cout << "Second place: Racer 3" << height3 << ", " << date3 << std::endl;
	}
	else if (height1 == height3)
	{
		std::cout << "First place: Racer 1" << height1 << ", " << date1 << std::endl;
		std::cout << "First place: Racer 3" << height3 << ", " << date3 << std::endl;
		std::cout << "Second place: Racer 2" << height2 << ", " << date2 << std::endl;
	}
	else if (height3 == height2)
	{
		std::cout << "First place: Racer 2" << height2 << ", " << date2 << std::endl;
		std::cout << "First place: Racer 3" << height3 << ", " << date3 << std::endl;
		std::cout << "Second place: Racer 1" << height1 << ", " << date1 << std::endl;
	}
	else
		std::cout << "All attempts are tied." << std::endl;
}

void chapter4Problems::fatGramCalculator()
{
	//This program will ask for the number of calories and fat grams in a food

	double calories, fatGrams;

	//Gather amount of calories
	std::cout << "Enter the number of calories in the food: ";
	std::cin >> calories;

	//Input validation: Number of calories entered cannot be less than 0
	while (calories < 0)
	{
		std::cout << "Calories cannot be negative. Try again: ";
		std::cin >> calories;
	}

	//Gather amount of fat grams
	std::cout << "Enter the amount of fat grams in the food: ";
	std::cin >> fatGrams;

	//Input validation: Number of fat grams entered cannot be less than 0
	while (fatGrams < 0)
	{
		std::cout << "Fat grams cannot be negative. Try again: ";
		std::cin >> fatGrams;
	}

	//Calculate total calories including calories from fat grams
	double total = calories + (fatGrams * 9.00);

	/* Display the percentage of calories that come from fat. Calories from fat cannot be greater
	   than total calories. */
	double percentageCalories = (fatGrams * 9.00) / total;

	if ((fatGrams * 9.00) > total)
		std::cout << "The values you have inputted for calories/fat grams were incorrectly entered." << std::endl;
	else
	{
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Percentage of calories that comes from fat: " << percentageCalories << "%" << std::endl;
	}
}

void chapter4Problems::spectralAnalysis()
{
	/* This program will display what wave is based on the user's wavelength input
	   of an electromagnetic wave */

	double electromagneticWave;

	//Gather input
	std::cout << "Enter the wavelength of an electromagnetic wave: ";
	std::cin >> electromagneticWave;

	//Display the respective wave
	if (electromagneticWave >= 1E-2)
		std::cout << "The wavelength entered is a radio wave." << std::endl;
	else if (electromagneticWave >= 1E-3)
		std::cout << "The wavelength entered is a microwave." << std::endl;
	else if (electromagneticWave >= 7E-7)
		std::cout << "The wavelength entered is a infrared wave." << std::endl;
	else if (electromagneticWave >= 4E-7)
		std::cout << "The wavelength entered is a visible light wave." << std::endl;
	else if (electromagneticWave >= 1E-8)
		std::cout << "The wavelength entered is a ultraviolet wave." << std::endl;
	else if (electromagneticWave >= 1E-11)
		std::cout << "The wavelength entered is a x-ray wave." << std::endl;
	else
		std::cout << "The wavelength entered is a gamma ray wave." << std::endl;
}

void chapter4Problems::speedOfSound()
{
	/* This program will display the amount of time it takes for a sound wave to travel
	   in different mediums. */

	double distance, time;
	int medium;

	//Display menu
	std::cout << "Options                   Speed       " << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "1: Air           1,100 feet per second" << std::endl;
	std::cout << "2: Water         4,900 feet per second" << std::endl;
	std::cout << "3: Steel        16,400 feet per second" << std::endl;
	
	//Gather input
	std::cout << "Enter a medium for sound to travel through by typing the respective number: ";
	std::cin >> medium;

	//Switch
	switch (medium)
	{
	case 1: std::cout << "Enter a distance for sound to travel through in feet: ";
		std::cin >> distance;

		//Input validation: Distance cannot be less than 0
		while (distance < 0)
		{
			std::cout << "Distance cannot be negative. Try again: ";
			std::cin >> distance;
		}

		/* Calculate the time it takes for the sound to travel in air with
		   its respective distance */
		time = distance / 1100.0;
		std::cout << "The time it would take to travel the given distance: " << time << " second(s)." << std::endl;
		break;

	case 2: std::cout << "Enter a distance for sound to travel through in feet: ";
		std::cin >> distance;

		//Input validation: Distance cannot be less than 0
		while (distance < 0)
		{
			std::cout << "Distance cannot be negative. Try again: ";
			std::cin >> distance;
		}

		/* Calculate the time it takes for the sound to travel in water with
		   its respective distance */
		time = distance / 4900.0;
		std::cout << "The time it would take to travel the given distance: " << time << " second(s)." << std::endl;
		break;

	case 3: std::cout << "Enter a distance for sound to travel through in feet: ";
		std::cin >> distance;

		//Input validation: Distance cannot be less than 0
		while (distance < 0)
		{
			std::cout << "Distance cannot be negative. Try again: ";
			std::cin >> distance;
		}

		/* Calculate the time it takes for the sound to travel in air with
		   its respective distance */
		time = distance / 16400;
		std::cout << "The time it would take to travel the given distance: " << time << " second(s)." << std::endl;
		break;

	default: std::cout << "You made an invalid choice. Run the program again. " << std::endl;
		break;
	}
}

void chapter4Problems::freezingAndBoilingPoints()
{
	//This program will report what substances will boil or freeze based on the user's input of temperature

	double temperature;

	//Gather input
	std::cout << "Enter a temperature in Fahrenheit: ";
	std::cin >> temperature;

	//Determine which substances will freeze/boil with the given temperature
	if (temperature <= -173)
		std::cout << "Ethyl alochol will freeze." << std::endl;
	else if (temperature >= 172)
		std::cout << "Ethyl alcohol will boil." << std::endl;

	if (temperature <= -38)
		std::cout << "Mercury will freeze." << std::endl;
	else if (temperature >= 676)
		std::cout << "Mercury will boil." << std::endl;

	if (temperature <= -362)
		std::cout << "Oxygen will freeze." << std::endl;
	else if (temperature >= -306)
		std::cout << "Oxygen will boil." << std::endl;

	if (temperature <= 32)
		std::cout << "Water will freeze." << std::endl;
	else if (temperature >= 212)
		std::cout << "Water will boil." << std::endl;
}

void chapter4Problems::speedOfSoundInGases()
{
	/* This program will display the distance of the source of the sound based on the time inputted
	   in different mediums. */

	double time, distance;
	int medium;

	//Display menu
	std::cout << "Options          Speed (meters per second)" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "1: Carbon Dioxide           258.0         " << std::endl;
	std::cout << "2: Air                      331.5         " << std::endl;
	std::cout << "3: Helium                   972.0         " << std::endl;
	std::cout << "4: Hydrogen                1270.0         " << std::endl;

	//Gather input
	std::cout << "Enter a medium for sound to travel through by typing the respective number: ";
	std::cin >> medium;

	//Switch
	switch (medium)
	{
	case 1: std::cout << "Enter the time in seconds that sound has traveled: ";
		std::cin >> time;

		//Input validation: Time cannot be less than 0 or greater than 30
		while (time < 0 || time > 30)
		{
			std::cout << "Time cannot be less than 0 or greater than 30 seconds. Try again: ";
			std::cin >> time;
		}

		/* Calculate the distance of the source based on the time given in carbon dioxide */
		distance = time * 258.00;
		std::cout << "The distance from the source of the detectation location: " << distance << " meter(s)." << std::endl;
		break;

	case 2: std::cout << "Enter the time in seconds that sound has traveled: ";
		std::cin >> time;

		//Input validation: Time cannot be less than 0 or greater than 30
		while (time < 0 || time > 30)
		{
			std::cout << "Time cannot be less than 0 or greater than 30 seconds. Try again: ";
			std::cin >> time;
		}

		/*  Calculate the distance of the source based on the time given in air */
		distance = time * 331.5;
		std::cout << "The distance from the source of the detectation location: " << distance << " meter(s)." << std::endl;
		break;

	case 3: std::cout << "Enter the time in seconds that sound has traveled: ";
		std::cin >> time;

		//Input validation: Time cannot be less than 0 or greater than 30
		while (time < 0 || time > 30)
		{
			std::cout << "Time cannot be less than 0 or greater than 30 seconds. Try again: ";
			std::cin >> time;
		}

		/*  Calculate the distance of the source based on the time given in helium */
		distance = time * 972.0;
		std::cout << "The distance from the source of the detectation location: " << distance << " meter(s)." << std::endl;
		break;

	case 4: std::cout << "Enter the time in seconds that sound has traveled: ";
		std::cin >> time;

		//Input validation: Time cannot be less than 0 or greater than 30
		while (time < 0 || time > 30)
		{
			std::cout << "Time cannot be less than 0 or greater than 30 seconds. Try again: ";
			std::cin >> time;
		}

		/*  Calculate the distance of the source based on the time given in hydrogen */
		distance = time * 1270;
		std::cout << "The distance from the source of the detectation location: " << distance << " meter(s)." << std::endl;
		break;

	default: std::cout << "You made an invalid choice. Run the program again. " << std::endl;
		break;
	}
}

void chapter4Problems::geometryCalculator()
{
	/* This program will calculate areas of different shapes based on
	   the user's selection */

	int choice;
	double radius, length, width, base, height, circle, rectangle, triangle;
	const double PI = 3.14159;

	//Display menu
	std::cout << "Geometry Calculator" << std::endl;
	std::cout << "1. Calculate the Area of a Circle" << std::endl;
	std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
	std::cout << "3. Calculate the Area of a Triangle" << std::endl;
	std::cout << "4. Quit \n" << std::endl;
	std::cout << "Enter your choice (1-4): ";
	
	//Gather input
	std::cin >> choice;

	//Switch
	switch (choice)
	{
	case 1: std::cout << "Enter the radius of the circle: ";
		std::cin >> radius;

		//Input validation: Radius cannot be negative
		while (radius < 0)
		{
			std::cout << "Radius cannot be negative. Try again: ";
			std::cin >> radius;
		}

		//Calculate area for a circle and display it
		circle = PI * pow(radius, 2);
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Area of Circle: " << circle << std::endl;

	case 2: std::cout << "Enter the length of the rectangle: ";
		std::cin >> length;

		//Input validation: length cannot be negative
		while (length < 0)
		{
			std::cout << "Length cannot be negative. Try again: ";
			std::cin >> length;
		}

		//Gather width
		std::cout << "Enter the width of the rectangle: ";
		std::cin >> width;

		//Input validation: width cannot be negative
		while (width < 0)
		{
			std::cout << "Width cannot be negative. Try again: ";
			std::cin >> width;
		}

		//Calculate area for a rectangle and display it
		rectangle = length * width;
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Area of Rectangle: " << rectangle << std::endl;

	case 3: std::cout << "Enter the base of the triangle: ";
		std::cin >> base;

		//Input validation: Base cannot be negative
		while (base < 0)
		{
			std::cout << "Base cannot be negative. Try again: ";
			std::cin >> base;
		}

		//Gather height
		std::cout << "Height the width of the rectangle: ";
		std::cin >> height;

		//Input validation: Height cannot be negative
		while (height < 0)
		{
			std::cout << "Height cannot be negative. Try again: ";
			std::cin >> height;
		}

		//Calculate area for a triangle and display it
		triangle = base * height * 0.5;
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Area of Triangle: " << triangle << std::endl;

	case 4: exit(0);

	default: std::cout << "You have chosen an invalid option. Re-run the program." << std::endl;
	}
}

void chapter4Problems::longDistanceCalls()
{
	//This program will display the charges for a phone call

	double time, NUM_MINUTES, charges;

	//Gather time input
	std::cout << "Enter the starting time of the call in the format (HH.MM): ";
	std::cin >> time;

	//Input validation: No time should be greater than 23:59 or negative. Minutes cannot exceed 59
	double minutes = time - static_cast<int>(time);
	while ((time < 0 || time > 23.59) || (minutes > 0.59))
	{
		std::cout << "Time cannot be less than 0 or greater than 23.59. Minutes cannot exceed 59. Try again: ";
		std::cin >> time;
		minutes = time - static_cast<int>(time);
	}

	//Gather amount of minutes
	std::cout << "Enter the amount of minutes in the call: ";
	std::cin >> NUM_MINUTES;

	//Input validation: Number of minutes cannot be negative
	while (NUM_MINUTES < 0)
	{
		std::cout << "Number of minutes cannot be less than 0. Try again: ";
		std::cin >> NUM_MINUTES;
	}

	//Calculate charges
	if (time >= 0 && time <= 6.59)
		charges = 0.05 * NUM_MINUTES;
	else if (time >= 7.00 && time <= 19.00)
		charges = 0.45 * NUM_MINUTES;
	else
		charges = 0.20 * NUM_MINUTES;

	//Display charges
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Total amount for the duration of this call: $" << charges << std::endl;
}

void chapter4Problems::mobileService()
{
	//This program will display the total charge based on their minutes used for a phone call

	double minutes, hours, savingsB = 0.0, savingsC = 0.0, fees = 0.0, feesB = 0.0, feesC = 0.0;
	char package;

	//Gather amount of minutes
	std::cout << "Enter the amount of minutes used: ";
	std::cin >> minutes;

	//Input validation: Minutes cannot be negative
	while (minutes < 0)
	{
		std::cout << "Minutes cannot be negative. Try again: ";
		std::cin >> minutes;
	}

	//Gather month
	std::string month;
	std::cout << "Enter the name of the month for billing: ";
	std::cin >> month;

	//Input validation: Minutes cannot exceed the maximum amount in the month
	if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December")
	{
		hours = minutes / 60.0;
		while (hours > 744)
		{
			std::cout << "Hours cannot exceed more than 744 for " << month << ". Enter a valid amount of minutes: ";
			std::cin >> minutes;

			//Input validation: Minutes cannot be negative
			while (minutes < 0)
			{
				std::cout << "Minutes cannot be negative. Try again: ";
				std::cin >> minutes;
			}
			hours = minutes / 60.0;
		}
	}
	else if (month == "February")
	{
		hours = minutes / 60.0;
		while (hours > 672)
		{
			std::cout << "Hours cannot exceed more than 672 for February. Enter a valid amount of minutes: ";
			std::cin >> minutes;

			//Input validation: Minutes cannot be negative
			while (minutes < 0)
			{
				std::cout << "Minutes cannot be negative. Try again: ";
				std::cin >> minutes;
			}

			hours = minutes / 60.0;
		}
	}
	else if (month == "April" || month == "June" || month == "September" || month == "November")
	{
			hours = minutes / 60.0;
			while (hours > 720)
			{
				std::cout << "Hours cannot exceed more than 720 for " << month << ". Enter a valid amount of minutes: ";
				std::cin >> minutes;

				//Input validation: Minutes cannot be negative
				while (minutes < 0)
				{
					std::cout << "Minutes cannot be negative. Try again: ";
					std::cin >> minutes;
				}

				hours = minutes / 60.0;
			}
	}
	else
		std::cout << "The month you entered was either not valid or did not have the 1st letter capitalized." << std::endl;

	//Gather which package did the user use
	std::cout << "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are \n";
	std::cout << "			 $0.45 per minute." << std::endl;
	std::cout << "Package B: For $59.99 per month 900 minutes are provided. Additional minutes are \n";
	std::cout << "			 $0.40 per minute." << std::endl;
	std::cout << "Package C: For $69.99 per month unlimited minutes provided. \n" << std::endl;

	std::cout << "Enter which package you have purchased: ";
	std::cin >> package;

	//Switch including savings from different packages
	switch (package)
	{
	case 'A': if (minutes <= 450)
				  fees = 39.99;
			  else
			  {
				  fees = 39.99 + ((minutes - 450) * 0.45);
				  if (fees > 59.99)
				  {
					  if (minutes <= 900)
					  {
						  savingsB = fees - 59.99;
						  std::cout << "Amount saved if you purchased Package B: $" << savingsB << std::endl;
					  }
					  else
					  {
						  feesB = 59.99 + ((minutes - 900) * 0.40);
						  savingsB = fees - feesB;
						  std::cout << "Amount saved if you purchased Package B: $" << savingsB << std::endl;
					  }
					  if (fees > 69.99)
					  {
						  savingsC = fees - 69.99;
						  std::cout << "Amount saved if you purchased Package C: $" << savingsC << std::endl;
					  }
				  }
			  }
		break;

	case 'B': if (minutes <= 900)
			      fees = 59.99;
			  else
			  {
				  fees = 59.99 + ((minutes - 900) * 0.40);
				  if (fees > 69.99)
				  {
					  savingsC = fees - 69.99;
					  std::cout << "Amount saved if you purchased Package C: $" << savingsC << std::endl;
				  }
			  }
		break;

	case 'C': fees = 69.99;
		break;

	default: std::cout << "You must only select Package A, B, or C. Run the program again." << std::endl;
	}

	//Display monthly bill
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Monthly bill fees: $" << fees << std::endl;
}

chapter4Problems::chapter4Problems()
{
}
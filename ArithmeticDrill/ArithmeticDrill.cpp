// ArithmeticDrill.cpp 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Get two integers from the user
	cout << "Enter a number:\t\t";
	int num1;
	cin >> num1;

	cout << "Enter another number:\t";
	int num2;
	cin >> num2;

	//Get the user's full name
	cout << "Enter your full name:\t";
	string fullName;
	cin >> fullName;

	//Do some arithmetic calculations
	int sum{ num1 + num2 };
	int difference{ num1 - num2 };
	int product{ num1 * num2 };
	double average{ (num1 + num2) / 2.0 };
	int remainder{ num1 % num2 };
	double quotient{ num1 / (double)num2 };

	//Output the calculations 23
	constexpr int title_width{ 11 }, value_width{ 12 };
	cout << "\nHello, " << fullName << ". Here is your Arithmetic Drill." << endl;
	cout << setw(title_width) << "Sum:" << right << setw(value_width) << sum << endl;
	cout << setw(title_width) << "Difference:" << right << setw(value_width) << difference << endl;
	cout << setw(title_width) << "Product:" << right << setw(value_width) << product << endl;
	cout << setw(title_width) << "Average:" << right << setw(value_width) << fixed << setprecision(1) << average << endl;
	cout << setw(title_width) << "Remainder:" << right << setw(value_width) << remainder << endl;
	cout << setw(title_width) << "Quotient:" << right << setw(value_width) << quotient << endl;
}
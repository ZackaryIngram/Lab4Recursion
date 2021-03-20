#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
string palindrome(string palindromeString);
int quicksort(int quickSortInt);
void reverse(const string& reverseString);

int main()
{
	int userInput;

	string palindromeString;
	int quickSortInt;
	string reverseString;

	cout << "----------------------------" << endl;
	cout << "Welcome to Lab 4 - Recursion " << endl;
	cout << "----------------------------" << endl << endl;
	cout << "1) Palindrome " << endl << "2) Quicksort " << endl << "3) Reverse String " << endl << "4) Exit "<< endl;
	cin >> userInput;

	if (userInput == 1)//Palindrome
	{
		cout << "Enter a string, and I will determine if it is a palindrome: " << endl;
		getline(cin, palindromeString);
	}
	else if (userInput == 2)//Quicksort
	{
		//int randArray[quickSortInt];
		cout << "Enter the size of the array, and I will sort it: " << endl;
		cin >> quickSortInt;
	}
	else if (userInput == 3)//Reverse String
	{
		cout << "Enter a string, and I will reverse it: " << endl;
		getline(cin, reverseString);

		reverse(reverseString); // Call function
	}
	else if (userInput == 4)//Exit
	{
		cout << "Thank you for playing ! " << endl;
	}
	else //Input Validation if user inputed anything outside of 1-4
	{
		cout << "Invalid Input: Please input a number between 1-4 " << endl;
	}
	

	return 0;
}

//Function Definitions
string palindrome(string palindromeString)
{

	return string();
}

int quicksort(int quickSortInt)
{

	return 0;
}

void reverse(const string& reverseString)
{
	
	size_t chars = reverseString.size();

	if (chars == 1)
	{
		cout << reverseString << endl;
	}
	else
	{
		cout << reverseString[chars - 1];

		reverse(reverseString.substr(0, chars - 1));
	}

	
}

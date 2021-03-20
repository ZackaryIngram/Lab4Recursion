#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Function Prototypes
bool palindrome(char string[], int a, int b);


void quicksort(int arr[], int c, int d);
int partition(int arr[], int c, int d);
void swap(int* a, int* b);

void reverse(const string& reverseString);

int main()
{
	srand(time(NULL));
	int userInput;

	char palindromeS[100];
	const int size = 10;
	string reverseString;


	cout << "----------------------------" << endl;
	cout << "Welcome to Lab 4 - Recursion " << endl;
	cout << "----------------------------" << endl << endl;
	cout << "1) Palindrome " << endl << "2) Quicksort " << endl << "3) Reverse String " << endl << "4) Exit " << endl;
	cin >> userInput;

	if (userInput == 1)//Palindrome
	{
		cout << "Enter a string, and I will determine if it is a palindrome: " << endl;
		cin >> palindromeS;

			if (palindrome(palindromeS,0,0))
			{
				cout << "Yes it is a palindrom !" << endl;
			}
			else
			{
				cout << "No it is not a palindrome !" << endl;
			}
	}
	else if (userInput == 2)//Quicksort
	{
		
		cout << "Enter the size of the array, and I will sort it: " << endl;
		//cin >> size;
		int Array[size];
		int in = size / sizeof(Array[0]);
		quicksort(Array, 0, in - 1);

		for (int i = 0; i < in; i++)
		{
			Array[i] = rand() % 100;
			cout << Array[i] << endl;
		}

		return 0;

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
bool palindrome(char string[], int a, int b)
{
	if (a == b)
	{
		return true;
	}
	if (string[a] != string[b])
	{
		return false;
	}
	if (a < b + 1)
	{
		return palindrome(string, a + 1, b - 1);//recursion
	}
	return true;
}

void quicksort(int arr[], int c, int d)
{
	if (c < d)
	{
		int i = partition(arr, c, d);
		quicksort(arr, c, i - 1);
		quicksort(arr, i + 1, d);//recursion
	}
}

int partition(int arr[], int c, int d)
{
	int z = arr[d];
	int w = c - 1;

	for (int i = c; i <= d - 1; i++)
	{
		if (arr[i] <= z)
		{
			i++;
			swap(&arr[w], &arr[i]);
		}
		
	}
	swap(&arr[w + 1], &arr[d]);
	return (w+1);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a= *b;
	*b = temp;
}

void reverse(const string& reverseString)
{
	//gets the size of the string
	size_t chars = reverseString.size();

	if (chars == 1)
	{
		cout << reverseString << endl;
	}
	else
	{
		cout << reverseString[chars - 1];
		reverse(reverseString.substr(0, chars - 1));//Recursion
	}

	
	
}

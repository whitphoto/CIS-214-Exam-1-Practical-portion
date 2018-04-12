/********************************
*								*
*		Nathan Whitchurch		*
*		CIS 214 C++				*
*		Exam 1 Part 2 			*	
*		Problem 1				*
*								*
*								*
*********************************/

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;
class Array
	{	
		private:
			int arraySize;
			int newArray[];
		
		public:
			Array(int SizeIn);
			static int arrayPrompt();
			createArray(int sizeIn);
			fillArray(int sizeToFill);
			printArray();
			~Array();
		
	};

Array::arrayPrompt()
	{
		int promptSize;
		cout << "Enter Array Size Of Array";
		cin >> promptSize;
		return promptSize;
	}


Array::Array(int sizeIn)
	{
		arraySize = sizeIn;
		cout << "\nCreating an Array with " << sizeIn << " Spaces";
		int newArray[arraySize];
	
	}

		
Array::fillArray(int sizeToFill)
	{
		
		cout << "\nLets fill the Array";
		int fillSize = sizeToFill;
		for (int i=0; i<fillSize; i++)
		{
			cout <<"\nEnter the value for space " << i+1 << " ";
			cin >> newArray[i];
		};
	}
	
	
Array::printArray()
	{

			for (int i=0; i<arraySize; i++)
		{
			cout <<"\nThe Contents of Array Space " << i+1 << " is: " << Array::newArray[i];
		
		};
	}
	
	
Array::~Array()
	{
	}
	
	
	
#endif

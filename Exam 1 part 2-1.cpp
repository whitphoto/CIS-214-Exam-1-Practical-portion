/********************************
*								*
*		Nathan Whitchurch		*
*		CIS 214 C++				*
*		Exam 1 Part 2 			*	
*		Problem 1				*
*								*
*								*
*********************************/


#include <iostream>
#include "array.h"

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
	{
		
	int numOfSpaces;
			
	numOfSpaces = Array::arrayPrompt();
	Array* myarray = new Array(numOfSpaces);
	myarray->fillArray(numOfSpaces);
	myarray->printArray();
	myarray->~Array();
				
			
		return 0;
	}

/********************************
*								*
*		Nathan Whitchurch		*
*		CIS 214 C++				*
*		Exam 1 Part 2 			*	
*		Problem 1				*
*								*
*								*
********************************

#ifndef ARRAYPROMPT_H
#define ARRAYPROMPT_H
#include <iostream>

using namespace std;

class ArrayPrompt
	{
		private:
			int numArraySpaces;
			
		public:
			int arrayPrompt();
					
	};
	
int arrayPrompt()	
	{
		cout << "/nPlease enter the number of spaces for the array you want to create ";
		cin >> numArraySpaces;
		return numArraySpaces;
	}
	
#endif
*/

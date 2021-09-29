/*
	Dalton Hammel
	C++ Fall 2021
	Due: 9/27/2021
	Lab 3 User and File I/O

	Write an interactive C++ program that computes and outputs the mean and 
	population standard deviation of a set of four integers that are inputted by 
	a file called “inMeanStd.dat” and the user (should handle both). Although the 
	individual values are integers, the results are floating-point values. Be 
	sure to use proper formatting and appropriate comments in your code. Provide 
	appropriate prompts to the user. The output should be to the screen for the user 
	inputted values and to a file called “outMeanStd.dat”. The programs output should 
	be labeled clearly and formatted neatly. You must calculate the mean and standard 
	deviation in separate functions.
*/

#include <iostream> // Allows the ability to input and output 
#include <cmath>  // The math functuion for square root

using namespace std;

float numOne;
float numTwo;
float numThree;
float numFour;
float mean();
float standardDeviation();


int main() // The main function is use to call the other functions, input and output the numbers
{
	cout << "What is your First number: ";
	cin >> numOne;
	cout << "What is your Second number: ";
	cin >> numTwo;
	cout << "What is your Thrid number: ";
	cin >> numThree;
	cout << "What is your Forth number: ";
	cin >> numFour;

	mean();
	standardDeviation();
}

float mean() // This function is used to calculate and output the mean of the numbers inputed
{ 
	float mean = (numOne + numTwo + numThree + numFour) / 4;
	cout << "The mean of your numbers is " << mean << endl;
	return 0;
}

float standardDeviation() // This function is to find and output Standard Deviation of the numbers 
{
	float mean = (numOne + numTwo + numThree + numFour) / 4;
	float meanOne = (numOne - mean);
	float meanTwo = (numTwo - mean);
	float meanThree = (numThree - mean);
	float meanFour = (numFour - mean);
	float sum = (meanOne * meanOne) + (meanTwo * meanTwo) + (meanThree * meanThree) + (meanFour * meanFour);
	float divided = sum / 4;
	float standardDeviation = sqrt(divided);
	cout << "The Standard Deviation for your numbers is " << standardDeviation << endl;
	return 0;
}


// STILL NEED
// inputing
// more comments
// better prompts
// outputting